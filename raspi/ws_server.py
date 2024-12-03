import asyncio
import board
import websockets
import adafruit_vcnl4040
import adafruit_apds9960.apds9960
import RPi.GPIO as GPIO

from websockets import serve

# Setup GPIO and sensors
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)
GPIO.setup(26, GPIO.OUT)
GPIO.setup(16, GPIO.OUT)

i2c = board.I2C()
sensor = adafruit_vcnl4040.VCNL4040(i2c)
sensor2 = adafruit_apds9960.apds9960.APDS9960(i2c)
sensor2.enable_proximity = True

# Store all connected clients
connected_clients = set()

async def check_sensors():
    while True:
        try:
            if (sensor.proximity > 1):
                print("Proximity 1: ", sensor.proximity)
                GPIO.output(26,GPIO.HIGH)
                await broadcast("1," + str(sensor.proximity))
                await asyncio.sleep(0.5)
                GPIO.output(26,GPIO.LOW)
            if (sensor2.proximity > 1):
                print("Proximity 2: ", sensor2.proximity)
                GPIO.output(16,GPIO.HIGH)
                await broadcast("2," + str(sensor2.proximity))
                await asyncio.sleep(0.5)
                GPIO.output(16,GPIO.LOW)
            await asyncio.sleep(0.1)
        except Exception as e:
            print(f"Sensor error: {e}")
            await asyncio.sleep(1)

async def broadcast(message):
    if connected_clients:
        websockets.broadcast(connected_clients, str(message))
        print(f"Broadcasting to {len(connected_clients)} clients: {message}")

async def handle_client(websocket):
    print("New client connected")
    connected_clients.add(websocket)
    try:
        await websocket.send("Connected to server")
        while True:
            try:
                message = await websocket.recv()
                print(f"Received from client: {message}")
                await websocket.send(f"Server received: {message}")
            except websockets.ConnectionClosed:
                break
    finally:
        connected_clients.remove(websocket)
        print(f"Client disconnected. {len(connected_clients)} clients remaining")

async def main():
    sensor_task = asyncio.create_task(check_sensors())
    async with serve(handle_client, "localhost", 8765):
        print("WebSocket server started on ws://localhost:8765")
        await asyncio.Future()  # run forever

if __name__ == "__main__":
    asyncio.run(main())
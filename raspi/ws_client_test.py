import asyncio
import websockets

async def listen():
    ws_uri = "ws://localhost:8765"
    while True:  # Reconnection loop
        try:
            async with websockets.connect(ws_uri) as websocket:
                print("Connected to server")
                
                # Send initial message
                await websocket.send("Hello, Server!")
                
                while True:
                    try:
                        message = await websocket.recv()
                        print(f"Received: {message}")
                    except websockets.ConnectionClosed:
                        print("Connection lost")
                        break
                    
        except Exception as e:
            print(f"Connection failed: {e}")
        
        print("Attempting to reconnect in 3 seconds...")
        await asyncio.sleep(3)

if __name__ == "__main__":
    asyncio.run(listen())
#include "raylib.h"
#include "globals.h"
#include "player.h"
#include <iostream>
#include <input.h>
#include <chrono>
#include <string>
#include <sstream>

using namespace std::chrono;

int main()
{
	Player player = Player();
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Low Power PC Game");
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

		player.Draw();
		player.Move(GetPlayerInput(), player.GetSpeed() * GetFrameTime());
		
        EndDrawing();

		static bool measureFPS = true;
		if (IsKeyPressed(KEY_P))
		{
			measureFPS = !measureFPS;
		}
		if (measureFPS)
		{
			static double accumulatedFPS = 0.0f;
			static int frameCount = 0;
			static auto start = high_resolution_clock::now();
			static double averageFPS = 0.0f;
       		static std::stringstream ss;

        	if (duration_cast<milliseconds>(high_resolution_clock::now() - start).count() < 1000) //Accumulate
        	{
        		frameCount++;
        		accumulatedFPS += 1.0 / GetFrameTime(); //Convert to milliseconds because GetFrameTime() returns frame time in seconds
        	}
        	else //Display
        	{
	        	averageFPS = accumulatedFPS / frameCount;
	        	ss.str("");
   		        ss << (int)(averageFPS) << " FPS";
        		accumulatedFPS = 0.0f;
        		frameCount = 0;
        		start = high_resolution_clock::now();
        	}
        	DrawText(ss.str().c_str(), 10, 10, 20, GREEN);
		}
    }
    
    CloseWindow();
    return 0;
}

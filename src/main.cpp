#include "raylib.h"
#include "globals.h"
#include "player.h"
#include <iostream>
#include <input.h>

int main()
{
	Player player = Player();
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Low Power PC Game");
    
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);

		player.DrawPlayer();
		player.MovePlayer(GetPlayerInput(), Player::SPEED * GetFrameTime());
		
        EndDrawing();
    }
    
    CloseWindow();
    return 0;
}

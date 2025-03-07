#include "enet.h"
namespace rl{
	#include <raylib.h>
}
using namespace rl;

int main(){   
	rl::InitWindow(GetMonitorWidth(0), GetMonitorHeight(0), "this took over 5 hours 😭");
	SetWindowState(FLAG_WINDOW_RESIZABLE);
	SetExitKey(KEY_NULL);
	MaximizeWindow();
	SetTargetFPS(144);
	
	Vector2 pos;
	while(!WindowShouldClose()){
		if(IsKeyDown(KEY_W)) pos.y-= 0.5;
		if(IsKeyDown(KEY_A)) pos.x-= 0.5;
		if(IsKeyDown(KEY_S)) pos.y+= 0.5;
		if(IsKeyDown(KEY_D)) pos.x+= 0.5;

		BeginDrawing();
			ClearBackground(rl::BLACK);
			DrawRectangle(pos.x, pos.y, 100.0f, 100.0f, rl::YELLOW );
		EndDrawing();
	}
	rl::CloseWindow();
}
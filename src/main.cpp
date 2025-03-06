#include "enet.h"
namespace rl{
    #include <raylib.h>
}

int main() 
{   
	rl::InitWindow(rl::GetMonitorWidth(0), rl::GetMonitorHeight(0), "this took over 5 hours 😭");
	rl::SetWindowState(rl::FLAG_WINDOW_RESIZABLE);
	rl::SetExitKey(rl::KEY_NULL);
	rl::MaximizeWindow();
	rl::SetTargetFPS(144);
    
    while (!rl::WindowShouldClose())
    {   
        rl::BeginDrawing();
            rl::ClearBackground(rl::BLACK);
        rl::EndDrawing();
    }
    
    rl::CloseWindow();
}
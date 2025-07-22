#include <iostream>
#include <raylib.h>

int main() {
  const int screenWidth = 800;
  const int screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "Window");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {

    BeginDrawing();
    ClearBackground(GRAY);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}

#include "math.h"
#include "pthread.h"
#include "raylib.h"
#include "raymath.h"
#define NO_FONT_AWESOME
#include "rlImGui.h"
#include "stdio.h"

int main() {
  float screenWidth = 600;
  float screenHeight = 600;

  InitWindow(screenWidth, screenHeight, "circulator");
  SetWindowState(FLAG_WINDOW_RESIZABLE);

  rlImGuiSetup(true);
  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(RAYWHITE);

    screenWidth -=  0.01f;
    screenHeight -= 0.01f;

    SetWindowSize(screenWidth, screenHeight);

    rlImGuiBegin();
    ImGui::Begin("inspector");
    { ImGui::Text("kasdlaslkdlasd"); }
    ImGui::End();
    rlImGuiEnd();

    EndDrawing();
  }
  rlImGuiShutdown();
  CloseWindow();
  return 0;
}

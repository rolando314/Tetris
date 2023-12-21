#include <raylib.h>
#include "game.h"
#include <iostream>
#include <random>

struct Time
{
  double lastUpdateTime = 0;

  bool eventTriggered(double interval)
  {
    double currentTime = GetTime();
    if (currentTime - lastUpdateTime >= interval)
    {
      lastUpdateTime = currentTime;
      return true;
    }
    return false;
  }
};

int main()
{
  InitWindow(500, 620, "Tetris");
  SetTargetFPS(70);

  Game game = Game();
  Time t;

  while (!WindowShouldClose())
  {
    game.handleInput();

    if (t.eventTriggered(0.2))
      game.moveBlockDown();

    BeginDrawing();

    ClearBackground(WHITE);

    game.draw();

    EndDrawing();
  }

  CloseWindow();
}
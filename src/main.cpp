#include <raylib.h>
#include "game.h"
#include <iostream>
using std::cout;

int main()
{
  InitWindow(300, 600, "Tetris");
  SetTargetFPS(70);

  Game game = Game();
  game.grid.print();

  while (!WindowShouldClose())
  {
    game.handleInput();
    BeginDrawing();

    ClearBackground(WHITE);
    game.draw();

    EndDrawing();
  }

  CloseWindow();
}
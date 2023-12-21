#include <raylib.h>
#include "grid.h"
#include "blocks.h"

int main(){
  InitWindow(300, 600, "Tetris");
  SetTargetFPS(70);

  // Color BACKGROUND_COLOR = {5, 7, 74, 100};

  Grid grid = Grid();
  grid.print();

  LBlock block = LBlock();

  while(!WindowShouldClose()){
    BeginDrawing();

    ClearBackground(WHITE);

    grid.draw();
    block.draw();

    EndDrawing();
  }

  CloseWindow();
}
#include <raylib.h>
#include "grid.h"

int main(){
  InitWindow(300, 600, "Tetris");
  SetTargetFPS(70);

  Color BACKGROUND_COLOR = {5, 7, 74, 100};

  Grid grid = Grid();
  grid.grid[0][5] = 1;
  grid.print();

  while(!WindowShouldClose()){
    BeginDrawing();

    ClearBackground(WHITE);

    grid.draw();

    EndDrawing();
  }

  CloseWindow();
}
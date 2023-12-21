#include <raylib.h>
#include "grid.h"

int main(){
  InitWindow(300, 600, "Tetris");
  SetTargetFPS(70);

  Color BACKGROUND_COLOR = {5, 7, 74, 100};

  Grid grid = Grid();
  grid.print();

  while(!WindowShouldClose()){
    BeginDrawing();

    ClearBackground(BACKGROUND_COLOR);

    EndDrawing();
  }

  CloseWindow();
}
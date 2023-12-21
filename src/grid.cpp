#include "grid.h"
#include "colors.h"
#include <iostream>

Grid::Grid()
{
  numRows = 20;
  numCols = 10;
  cellSize = 30;
  initialize();
  colors = getCellColors();
}

void Grid::initialize()
{
  for (int row = 0; row < numRows; row++)
  {
    for (int column = 0; column < numCols; column++)
    {
      grid[row][column] = 0;
    }
  }
}

void Grid::print()
{
  for (const auto &row : grid)
  {
    for (int elem : row)
    {
      std::cout << elem << " ";
    }
    std::cout << "\n";
  }
}

void Grid::draw()
{
  for (int row = 0; row < numRows; row++){
    for (int col = 0; col < numCols; col++){
      int cellVal = grid[row][col];
      DrawRectangle(col * cellSize + 1, row * cellSize + 1, cellSize - 1 , cellSize - 1, colors[cellVal]);
    }
  }
}
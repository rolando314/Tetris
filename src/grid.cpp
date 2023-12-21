#include "grid.h"
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

std::vector<Color> Grid::getCellColors()
{
  Color darkGrey = {26, 31, 40, 255};
  Color green = {47, 230, 23, 255};
  Color red = {232, 18, 18, 255};
  Color orange = {226, 116, 17, 255};
  Color yellow = {237, 234, 4, 255};
  Color purple = {166, 0, 247, 255};
  Color cyan = {21, 204, 209, 255};
  Color blue = {13, 64, 216, 255};

  return {darkGrey, green, red, orange, yellow, purple, cyan, blue};
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
#pragma once

class Grid {
  private:
    int numRows;
    int numCols;
    int cellSize;
  public:
    Grid();
    int grid[20][10];
    void initialize();
    void print();
};
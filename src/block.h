#pragma once
#include <vector>
#include <map>
#include "position.h"
#include "colors.h"

class Block {
  private:
    int cellSize;
    int rotState;
    std::vector<Color> colors;
    int rowOffset;
    int colOffset;

  public: 
    Block();
    void draw();
    void move(int rows, int cols);
    std::vector<Position> getCellPositions();
    int id;
    std::map<int, std::vector<Position>> cells;
};
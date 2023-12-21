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

  public: 
    Block();
    void draw();
    int id;
    std::map<int, std::vector<Position>> cells;
};
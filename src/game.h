#pragma once
#include "grid.h"
#include "blocks.h"


class Game {
  private:
    bool isBlockOutside();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;

  public: 
    Game();
    Block getRandomBlock();
    void draw();
    Grid grid;
    void handleInput();
};
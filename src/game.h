#pragma once
#include "grid.h"
#include "blocks.h"


class Game {
  private:
    bool isBlockOutside();
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
    void rotateBlock();
    void lockBlock();
    bool blockFits();
    void reset();

  public: 
    Game();
    Block getRandomBlock();
    void draw();
    Grid grid;
    void handleInput();
    void moveBlockDown();
    bool gameOver;
};
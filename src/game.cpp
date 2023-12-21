#include "game.h"
#include <random>
#include <iostream>

std::vector<Block> returnBlocks()
{
  return {IBlock(), JBlock(), OBlock(), ZBlock(), SBlock(), TBlock(), LBlock()};
}

bool Game::isBlockOutside()
{
  std::vector<Position> tiles = currentBlock.getCellPositions();
  for (auto tile : tiles)
  {
    if (grid.isOutside(tile.row, tile.col))
      return true;
  }
  return false;
}

Game::Game()
{
  srand(time(0));
  grid = Grid();
  blocks = returnBlocks();
  currentBlock = getRandomBlock();
  nextBlock = getRandomBlock();
}

Block Game::getRandomBlock()
{
  if (blocks.empty())
  {
    blocks = returnBlocks();
  }
  int randomIndex = (rand() % blocks.size());
  Block block = blocks[randomIndex];
  blocks.erase(blocks.begin() + randomIndex);
  return block;
}

void Game::draw()
{
  {
    grid.draw();
    currentBlock.draw();
  }
}

void Game::handleInput()
{
  int keyPressed = GetKeyPressed();
  switch (keyPressed)
  {
  case KEY_LEFT:
    currentBlock.move(0, -1);
    if (isBlockOutside())
      currentBlock.move(0, 1);
    break;

  case KEY_RIGHT:
    currentBlock.move(0, 1);
    if (isBlockOutside())
      currentBlock.move(0, -1);
    break;

  case KEY_DOWN:
    currentBlock.move(1, 0);
    if (isBlockOutside())
      currentBlock.move(-1, 0);
    break;

  case KEY_UP:
    rotateBlock();
    break;
  }
}

void Game::rotateBlock()
{
  currentBlock.rotate();
  if (isBlockOutside())
    currentBlock.rotateBack();
}
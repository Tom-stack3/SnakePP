#ifndef BOARD_H
#define BOARD_H

#include "Directions.h"
#include <iostream>

class Board
{
private:
    int m_width;
    int m_height;

public:
    Board(int width, int height);
    int getNextX(int x, DIRECTION direction);
    int getNextY(int y, DIRECTION direction);
    int getWidth() { return m_width; }
    int getHeight() { return m_height; }
};

#endif
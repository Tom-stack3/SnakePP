#include "Board.h"

Board::Board(int width, int height)
{
    m_width = width;
    m_height = height;
}
int Board::getNextX(int x, DIRECTION direction)
{
    switch (direction)
    {
    case RIGHT:
        if (++x >= m_width)
        {
            x = 0;
        }
        break;
    case LEFT:
        if (--x < 0)
        {
            x = m_width - 1;
        }
        break;
    default:
        break;
    }
    return x;
}
int Board::getNextY(int y, DIRECTION direction)
{
    switch (direction)
    {
    case DOWN:
        if (++y >= m_height)
        {
            y = 0;
        }
        break;
    case UP:
        if (--y < 0)
        {
            y = m_height - 1;
        }
        break;
    default:
        break;
    }
    return y;
}
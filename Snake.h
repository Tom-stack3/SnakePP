#ifndef SNAKE_H
#define SNAKE_H
#include "Board.h"
#include <list>
#include <algorithm>

class Snake
{
private:
    std::list<int> m_cubes;
    DIRECTION m_direction;
    Board m_board;

public:
    Snake(Board &board, int x_start, int y_start);
    void nextStep();
    void addOneCube();
    void setDirection(DIRECTION direction)
    {
        m_direction = direction;
    }
    DIRECTION getDirection()
    {
        return m_direction;
    }
    int getIndexFromXY(int x, int y)
    {
        return y * m_board.getWidth() + x;
    }
    void getXYFromIndex(int index, int &x, int &y)
    {
        x = index % m_board.getWidth();
        y = index / m_board.getWidth();
    }
    bool has(int x, int y)
    {
        return std::find(m_cubes.begin(), m_cubes.end(), getIndexFromXY(x, y)) != m_cubes.end();
    }
    int getHeadIndex()
    {
        return m_cubes.back();
    }
    bool isDead()
    {
        return (std::count(m_cubes.begin(), m_cubes.end(), getHeadIndex()) > 1);
    }
};

#endif
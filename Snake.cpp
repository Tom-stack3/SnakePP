#include "Snake.h"
Snake::Snake(Board &board, int x_start, int y_start) : m_board(board)
{
    // Create the head
    m_cubes.push_back(getIndexFromXY(x_start, y_start));
}

void Snake::nextStep()
{
    // Pop the tail and add to the head of the snake a new cube
    addOneCube();
    m_cubes.pop_front();
}

void Snake::addOneCube()
{
    int nextX, nextY;
    getXYFromIndex(m_cubes.back(), nextX, nextY);
    // Get the coordinates of the new cube
    nextX = m_board.getNextX(nextX, m_direction);
    nextY = m_board.getNextY(nextY, m_direction);
    // Add cube to snake
    m_cubes.push_back(getIndexFromXY(nextX, nextY));
}
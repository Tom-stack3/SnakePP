#ifndef GAME_H
#define GAME_H

#include "Board.h"
#include "Snake.h"
#include "kbhit.h"
#include <vector>

class Game
{
private:
    Board m_board;
    Snake m_snake;
    // Vector of empty cubes
    std::list<int> m_blankIndexes;
    // Index of food cube
    int m_food_index;
    Board &getBoard()
    {
        return m_board;
    }
    bool m_is_alive;
    bool m_did_quit;
    int m_max_input_wait_ms;
    void createFood();
    bool hasFood(int x, int y);
    bool hasFood(int index);

public:
    Game(Board &board, Snake &snake);
    void draw();
    void nextStep();
    bool isLive()
    {
        return (m_is_alive && !m_did_quit);
    }
    void getInput();
    static void play();
};

#endif
#ifndef KBHIT_H
#define KBHIT_H

#include <termios.h>

// Solution from: https://stackoverflow.com/questions/29335758/using-kbhit-and-getch-on-linux
// Thanks to @orlov_dumitru

class keyboard
{
public:
    keyboard();
    ~keyboard();
    int kbhit();
    int getch();

private:
    struct termios initial_settings, new_settings;
    int peek_character;
};

#endif
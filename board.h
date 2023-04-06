#ifndef __BOARD_H__
#define __BOARD_H__


#include <iostream> 
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include "textdisplay.h"


class TextDisplay;


class Board {
    std::vector<std::vector<char>> b;
    TextDisplay *td;
    public:
    Board();
    ~Board();
    void notify();
    friend std::ostream &operator<<(std::ostream &out, const Board &display);
};

#endif




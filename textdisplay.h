#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

class Subject;

class TextDisplay {
    std::vector<std::vector<char>> text;

    public:
    TextDisplay();
    ~TextDisplay();
    void reset();
    void addPlayer(char playerNum, int row, int col);


    friend std::ostream &operator<<(std::ostream &out, const TextDisplay &display);

};

#endif

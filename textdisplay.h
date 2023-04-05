#ifndef TEXTDISPLAY_H
#define TEXTDISPLAY_H
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>

class Subject;

class TextDisplay {
    std::vector<std::vector<char>> theDisplay;

    public:
    TextDisplay();
    ~TextDisplay();
    void notify();

    friend std::ostream &operator<<(std::ostream &out, const TextDisplay &td);

};

#endif

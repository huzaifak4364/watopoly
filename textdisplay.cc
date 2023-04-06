#include "textdisplay.h"
#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>


using namespace std;

TextDisplay::TextDisplay() {
    string s;
    fstream fin{"monopolyboard.txt"};
    while (getline(fin, s)) {
        vector<char> row;
        for (auto &c : s) {
            row.emplace_back(c);
        }
        text.emplace_back(row);
    }
}


TextDisplay::~TextDisplay() {}


void TextDisplay::addPlayer(char playerNum, int row, int col) {
    text[row][col] = playerNum;
}

void TextDisplay::reset() {
    string s;
    fstream fin{"monopolyboard.txt"};
    while (getline(fin, s)) {
        vector<char> row;
        for (auto &c : s) {
            row.emplace_back(c);
        }
        text.emplace_back(row);
    }
}

ostream &operator<<(ostream &out, const TextDisplay &display) {
    for (auto &row : display.text) {
        for (auto &c : row) {
            out << c;
        }
        out << endl;
    }
    return out;
}


#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include "textdisplay.h"

using namespace std;


int main(int argc, char *argv[]) {
    string filename = argv[1];
    ifstream file(filename);
    string line;
    vector<string> lines;
    while (getline(file, line)) {
        lines.push_back(line);
    }
    TextDisplay td(lines);
    td.print();
    return 0;
}
#ifndef _COMMANDS_H_
#define _COMMANDS_H_

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <vector>
#include <memory>

#include "board.h"


class Command {
    protected:
    std::string name;
    std::string description;
    public:
    virtual void execute() = 0;
    virtual ~Command() = default;
    std::string getName();
    std::string getDescription();
};


class Roll: public Command {
    public:
    Roll();
    void execute() override;
};


#endif
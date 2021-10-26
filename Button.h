#ifndef BUTTON_H
#define BUTTON_H
#include "Command.h"

class Button{
    private:
        Command* command;

    public:
        Button(Command*);
        void press();
        ~Button();
};

#endif //BUTTON_H
#include "Button.h"

Button::Button(Command* command){
    this->command = command;
}

void Button::press(){
    command->execute();
}

Button::~Button(){
    delete command;
    cout << "Button destroyed" << endl;
}
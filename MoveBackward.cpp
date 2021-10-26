#include "MoveBackward.h"

MoveBackward::MoveBackward(RemoteControlVehicle* vehicle):Command(vehicle){}

void MoveBackward::execute(){
    getReceiver()->backward();
}

void MoveBackward::undo(){
    getReceiver()->forward();
}

MoveBackward::~MoveBackward(){
    cout << "MoveBackward destroyed" << endl;
}
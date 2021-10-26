#ifndef MOVEFORWARD_H
#define MOVEFORWARD_H
#include "Command.h"

class MoveForward: public Command{
    public:
        MoveForward(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        ~MoveForward();

};

#endif //MOVEFORWARD_H
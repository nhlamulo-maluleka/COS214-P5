#ifndef MOVEBACKWARD_H
#define MOVEBACKWARD_H
#include "Command.h"

class MoveBackward: public Command{
    public:
        MoveBackward(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        ~MoveBackward();

};

#endif //MOVEBACKWARD_H
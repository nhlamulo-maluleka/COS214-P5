#ifndef TURNOFF_H
#define TURNOFF_H
#include "Command.h"

class TurnOff: public Command{
    public:
        TurnOff(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        ~TurnOff();

};

#endif //TURNOFF_H
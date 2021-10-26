#ifndef SPEED_H
#define SPEED_H
#include "Command.h"

class Speed: public Command{
    public:
        Speed(RemoteControlVehicle*);
        virtual void execute();
        virtual void undo();
        virtual void handleRequest();
        ~Speed();
};

#endif //SPEED_H
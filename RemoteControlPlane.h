#ifndef REMOTECONTROLPLANE_H
#define REMOTECONTROLPLANE_H
#include "RemoteControlVehicle.h"

class RemoteControlPlane: public RemoteControlVehicle{
    public:
        RemoteControlPlane();
        ~RemoteControlPlane();
        virtual void on();
        virtual void off();
        virtual void forward();
        virtual void backward();
};

#endif //REMOTECONTROLPLANE_H
#ifndef REMOTECONTROLROCKET_H
#define REMOTECONTROLROCKET_H
#include<iostream>
using namespace std;

class RemoteControlRocket{
    public:
        RemoteControlRocket();
        void takeOff();
        void stopLaunch();
        void increaseThrottle();
        void decreaseThrottle();
        ~RemoteControlRocket();
};

#endif //REMOTECONTROLROCKET_H
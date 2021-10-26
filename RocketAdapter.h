#ifndef ROCKETADAPTER_H
#define ROCKETADAPTER_H
#include "RemoteControlRocket.h"

class RocketAdapter{
    private:
        RemoteControlRocket* adaptee;
        bool toggle;

    public:
        RocketAdapter(RemoteControlRocket*);
        ~RocketAdapter();
        void on();
        void off();
        void forward();
        void backward();
        void setToggleStatus(bool);
        bool getToggleStatus();
};

#endif //ROCKETADAPTER_H
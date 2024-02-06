#include"Carbonfootprint.h"
#ifndef CAR_H
#define CAR_H
    class Car:public Carbonfootprint
    {
    private:
        int MaxSpeed;
    public:
        Car(int=0,int=0);
        virtual ~Car();


        virtual void Calculatecarbonfootprint(void) const;


        void SetMaxspeed(int);
        int GetMaxspeed(void)const;
    };
#endif
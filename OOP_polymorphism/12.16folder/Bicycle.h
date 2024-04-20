#include"Carbonfootprint.h"
#ifndef BICYCLE_H
#define BICYCLE_H
    class Bicycle:public Carbonfootprint
    {
    private:
        int FrameSize;
    public:
        Bicycle(int=0,int=0);
        virtual ~Bicycle();

        virtual void Calculatecarbonfootprint(void) const;

        void SetFrameSize(int);
        int GetFrameSize(void)const;
    };
#endif
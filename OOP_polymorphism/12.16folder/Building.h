#include"Carbonfootprint.h"
#ifndef BUILDDING_H
#define BUILDDING_H
    class Building:public Carbonfootprint
    {
    private:
        int SquareFootage;
    public:
        Building(int=0,int=0);
        virtual ~Building();

        virtual void Calculatecarbonfootprint(void) const;

        void SetSquareFootage(int);
        int GetSquareFootage(void)const;
    };
#endif
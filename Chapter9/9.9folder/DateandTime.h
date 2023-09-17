#ifndef DATEANDTIME_H
#define DATEANDTIME_H


class DateandTime
{
    public:
        explicit DateandTime(int =1,int =1,int =2000);
        ~ DateandTime();
        void NextDay();
        void print();

        unsigned int getHour()const;
        unsigned int getMin()const;
        unsigned int getSec()const;
        void tick();
        void printUniversal();
        void printStandard()const;

    private:
        void setTime(unsigned int ,unsigned int,unsigned int);
        void setHour(unsigned int);
        void setMin(unsigned int);
        void setSec(unsigned int);


        unsigned int month;
        unsigned int day;
        unsigned int year;
        unsigned int hour;
        unsigned int min;
        unsigned int sec;
};



#endif
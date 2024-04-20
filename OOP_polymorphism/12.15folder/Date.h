#ifndef DATE_H
#define DATE_H


class Date
{
    public:
        explicit Date(int =1,int =1,int =2000);
        void NextDay();
        void print() const;
        int GetMonth(void)const;
        int GetDay(void)const;

    private:
        unsigned int month;
        unsigned int day;
        unsigned int year;
};



#endif
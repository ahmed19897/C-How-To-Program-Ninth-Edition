


class Date
{
    public:
            Date(int month,int day,int year);
            void setMonth(int month);
            void setDay(int day);
            void setYear(int year);
            int getMonth()const;
            int getDay()const;
            int getYear()const;
            void displayDate()const;


    private:
            int Month;
            int Day;
            int Year;            


};
#ifndef Time_h
#define TIme_h
    using namespace std;

    class Time
    {
        public:
            explicit Time();
            ~Time();

            void setTime(unsigned int ,unsigned int,unsigned int);
            void setHour(unsigned int);
            void setMin(unsigned int);
            void setSec(unsigned int);

            unsigned int getHour()const;
            unsigned int getMin()const;
            unsigned int getSec()const;

            void printUniversal()const;
            void printStandard()const;

        private:
            unsigned int hour;
            unsigned int min;
            unsigned int sec;

    };
#endif
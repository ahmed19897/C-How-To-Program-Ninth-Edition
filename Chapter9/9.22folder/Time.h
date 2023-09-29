#ifndef Time_h
#define TIme_h
    using namespace std;

    class Time
    {
        public:
            explicit Time();
            ~Time();


            unsigned long getHour()const;
            unsigned long getMin()const;
            unsigned long getSec()const;

            void setTime(unsigned long ,unsigned long,unsigned long);
            void setHour(unsigned int);
            void setMin(unsigned int);
            void setSec(unsigned int);

            void tick();

            void printUniversal()const;
            void printStandard()const;

        private:
            unsigned long sec;

    };
#endif
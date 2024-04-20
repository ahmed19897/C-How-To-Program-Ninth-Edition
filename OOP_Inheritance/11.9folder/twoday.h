#ifndef TWODAY_H
#define TWODAY_H

    #include "package.h"

    class Twoday: public package
    {
        public:
            Twoday(const string & name,const string & address ,const string & city,const string & state,int zipsender,int zipreciever ,double weight,double costperounce,double flattfee);
            ~Twoday();

            void setFlatfee(double);
            double getFlatfee(void)const;

            double calculateCost(void)const;


        private:
            double FlatFee;

    };



#endif
#ifndef OVERNIGHT_H
#define OVERNIGHT_H

    #include "package.h"

    class Overnight: public package
    {
        public:
            Overnight(const string & name,const string & address ,const string & city,const string & state,int zipsender,int zipreciever ,double weight,double costperounce,double additionalfee);
            virtual ~Overnight();

            void setAdditionalfee(double);
            double getAdditionalfee(void)const;

            virtual double calculateCost(void)const;


        private:
            double Additionalfee;

    };



#endif
#ifndef Hugeint_h
#define Hugeint_h

    #include <array>
    #include <iostream>
    #include <string>
    using namespace std;
    class Hugeint
    {
        friend std::ostream &operator<<(std::ostream &,const Hugeint&);
        public:
            static const int digits=30;
            Hugeint(long=0);
            Hugeint(const std::string &);
 
            Hugeint operator+(const Hugeint &)const ; //addition of Hugeint + Hugeint
            Hugeint operator+(int )const ;     //addition of Hugeint + int
            Hugeint operator+(const string &)const ;  //addition of Hugeint + string


            Hugeint operator*(const Hugeint &)const ; //multiplication of Hugeint * Hugeint
            Hugeint operator*(int )const ;     //multiplication of Hugeint * int
            Hugeint operator*(const string &)const ;  //multiplication of Hugeint * string

            bool operator==(const Hugeint &)const ; //equal of Hugeint == Hugeint
            bool operator==(int )const ;     //equal of Hugeint == int
            bool operator==(const string &)const ;  //equal of Hugeint == string



            bool operator!=(const Hugeint &)const ; //not equal of Hugeint != Hugeint
            bool operator!=(int )const ;     //not equal of Hugeint != int
            bool operator!=(const string &)const ;  //not equal of Hugeint != string


            bool operator<(const Hugeint &)const ; //bigger of Hugeint < Hugeint
            bool operator<(int )const ;     //bigger of Hugeint < int
            bool operator<(const string &)const ;  //bigger of Hugeint < string


            bool operator>(const Hugeint &)const ; //smaller of Hugeint > Hugeint
            bool operator>(int )const ;            //smaller of Hugeint > int
            bool operator>(const string &)const ;  //smaller of Hugeint > string


            

        private:
            std::array<short,digits> integer;
    };

#endif
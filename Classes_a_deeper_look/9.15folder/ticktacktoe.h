#include <array>
using namespace std;


#ifndef TICKTACKTOE_H
#define TICKTACKTOE_H

    class ticktacktoe
    {

        public:
            ticktacktoe();
            ~ticktacktoe();

            void ResetBoard();
            void play(int);
            void displaythestat()const;
            


        private:
            bool hassomeonewon();
            array<array<int,3>,3>table;
            int currentplayernumber=0;
    };








#endif
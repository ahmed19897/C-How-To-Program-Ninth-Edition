#include <string>
#include <iostream>
#include <iomanip>

#ifndef POINT_H
#define POINT_H


    class point
    {
        friend std::ostream& operator<<(std::ostream &,const point &);
        friend std::istream& operator>>(std::istream &, point &);
        private:
            int x;
            int y;
            bool state;
    };

#endif
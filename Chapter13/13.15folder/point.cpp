#include "point.h"
#include <iomanip>

using namespace std;

std::ostream& operator<<(std::ostream & output,const point & point)
{
    if((!point.state))
    {
        output<<setw(5)<<point.x<<setw(5)<<point.y<<endl;
    }
    else
    {
        output<<"\nThe object data was not valid during input";
    }
    return output;
}

std::istream& operator>>(std::istream & input, point & point)
{
    cin>>point.x;
    cin.ignore();
    cin>>point.y;

    if(!(point.x >0 && point.y>0))
    {
        input.clear(ios::failbit);
        point.state=input.fail();
        cerr<<"Input is wrong ,values need to be bigger than 0:"
        <<cin.gcount()-1<<"\nFail bit is:"<<input.fail();
    }



    return input;
}
#include <vector>
using namespace std;
#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H
class HugeInteger
{
    public:
    HugeInteger(long  *localllptr);
    ~HugeInteger();
    void input(int);
    void  output(int);
    long  add(int,int);
    long  sub(int,int);
    bool isEqual(int ,long)const ;
    bool isNotEqual(int ,long)const ;
    bool isGreater(int ,long)const ;
    bool isLess(int ,long)const ;
    bool isGreaterthanorequal(int ,long)const ;
    bool isLessthanorequal(int ,long)const ;
    bool isZero(int)const ;
    private:
        long myarray[40];
        long   *llptr;
};
#endif
#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;



int main()
{

int x=4,y=7,a=1,b=2,g=4,xx=6,yy=5,i=5,j=6,result=0,result2=0,result3=0,result4=0,result5=0,result6=0;



result=(!(a==6)||!(g!=5));
result2=!((a==b)&&(g!=5));

result3=!((x<=8)&&(y>4));
result4=!(x<=8)||!(y>4);

result5=!((i>4)||(i<=6));
result6=!(i>4)&&!(j<=6);


cout<<result5<<'\t'<<result6<<endl;






    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int first_num = 0, second_num = 1, third_num, i, num;


    cout << "Enter random number to print fibonacci series:";
    cin >> num;
    cout << "Fibonacci Series for a given number:" <<endl;
    cout << first_num  <<endl;
    cout << second_num << endl;



    for(i = 2; i < num; ++i) //loop will starts from 2 because we have printed 0 and 1 before
    {
        third_num = first_num + second_num;
        cout << third_num << endl;
        first_num = second_num;
        second_num = third_num;
    }


    
    return 0;
}
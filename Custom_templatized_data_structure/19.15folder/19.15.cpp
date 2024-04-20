//simulation of customer qeue and service using randomnes
#include <random>
#include <iostream>
#include <deque>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

default_random_engine engine(static_cast<unsigned int>(time(0)));
uniform_int_distribution<unsigned int> randomInt(6,24);


int GetrandomTime(void);
int GetArrivalTime(void);
int GetServiceTime(void);


int main()
{
    deque<long>Customers;
    long nextcustomerarrival;
    long nextservicetime;
    unsigned long seconds_since_epoch=0;

//get current time and add 720 seconds to it (time of simulation) 
    unsigned long startingtime =(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+72;
    unsigned long schedulartime=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+6;

    //calculate the arrival of the first customer and qeue him to the customer qeue
    nextcustomerarrival=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+GetArrivalTime();
    Customers.push_back(nextcustomerarrival);
    nextservicetime=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+GetServiceTime();
    
    //run 10 simulation of 72 seconds each to get the number of customers remaining in qeue
    while( startingtime>seconds_since_epoch)
    {
        seconds_since_epoch =std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1);
        //one minute has elapsed since start
        //time to check if a customer arrived or see if the last customer was serviced
        if(schedulartime<seconds_since_epoch)
        {
            schedulartime=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+6;
            if(nextcustomerarrival<=seconds_since_epoch)//new customer arrived
            {
                //schedule the arrival of the next customer and push it into qeue
                nextcustomerarrival=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+GetArrivalTime();
                Customers.push_back(nextcustomerarrival);
            }
            if(nextservicetime<=seconds_since_epoch)//new customer serviced
            {
                nextservicetime=(std::chrono::system_clock::now().time_since_epoch() / std::chrono::seconds(1))+GetServiceTime();
                //deque the customer
                Customers.pop_front();
                //schedule the arrival of the next customer and push it into qeue
            }
        }
    }
    cout<<"After "<<i<<" iterations,there are :"<<Customers.size()<<"customers left in qeue !"<<endl;
    return 0;
}











int GetArrivalTime(void)
{
    return GetrandomTime();
}
int GetServiceTime(void)
{
    return GetrandomTime();
}
int GetrandomTime(void)
{
    return randomInt(engine);
}

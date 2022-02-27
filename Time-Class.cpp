#include<iostream>
using namespace std;
class Time
{
    int hours;
    int minutes;
    int seconds;
    
    public:
    void getTime();
    void printTime();
    void addTime(Time t1, Time t2);
};
void Time::getTime()
{
    cout<<"\nEnter the time values:-"<<endl;
    cout<<"Hours: ";    
    cin>>hours;
    cout <<"Minutes: ";  
    cin>>minutes;
    cout <<"Seconds: ";  
    cin>>seconds;
}
void Time::printTime()
{
    cout<<"\nTime after add: ";
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
}
void Time::addTime(Time t1, Time t2)
{
    seconds=t1.seconds+t2.seconds;
    minutes=seconds/60;
    seconds=seconds%60;
    minutes=t1.minutes+t2.minutes;
    hours=minutes/60;
    minutes=minutes%60;
    hours=t1.hours+t2.hours;
}
int main()
{
    Time t1,t2,t3;
    t1.getTime();
    t2.getTime();
    t3.addTime(t1,t2);
    t3.printTime();
    return 0;
}



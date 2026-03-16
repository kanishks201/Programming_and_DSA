#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
    Time t;
    t.setHour(18).setMinute(30).setSecond(22); //Cascaded Function Call
    cout<<"Universal Time : ";
    t.printUniversal();
    cout<<"\nStandard Time : ";
    t.printStandard();
    cout<<"\n\nNew Standard Time : ";
    t.setTime(20,20,20).printStandard(); //Cascaded Function Call
    cout<<endl;
    return 0;
}

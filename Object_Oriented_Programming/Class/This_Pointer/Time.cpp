#include<iostream>
#include<iomanip>
#include<stdexcept>
#include "Time.h"
using namespace std;

Time::Time(int hr,int mint,int sec){
    setTime(hr,mint,sec);
}
Time &Time::setTime(int h,int m,int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
    return *this; //Enables Cascading
}
Time &Time::setHour(int h){
    if(h>=0 && h<24)
        hour = h;
    else
        throw invalid_argument("Hour must be 0-23");
    return *this;
}
Time &Time::setMinute(int m){
    if(m>=0 && m<60)
        minute = m;
    else
        throw invalid_argument("Minute must be 0-59");
    return *this;
}
Time &Time::setSecond(int s){
    if(s>=0 && s<60)
        second = s;
    else
        throw invalid_argument("Second must be 0-59");
    return *this;
}
int Time::getHour() const{
    return hour;
}
int Time::getMinute() const{
    return minute;
}
int Time::getSecond() const{
    return second;
}
void Time::printUniversal() const{
    cout<<setfill('0')<<setw(2)<<hour<<":"<<setw(2)<<minute<<":"<<setw(2)<<second;
}
void Time::printStandard() const{
    cout<<((hour==0 || hour==12) ? 12 : hour%12)<<":"<<setfill('0')<<setw(2)<<minute<<":"<<setw(2)<<second<<(hour<12 ? "AM" : "PM");
}

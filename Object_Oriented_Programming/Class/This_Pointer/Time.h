#ifndef TIME_H_INCLUDED
#define TIME_H_INCLUDED

class Time{
public:
    Time(int = 0,int = 0,int = 0);//Default Constructor
    Time &setTime(int, int, int);//Time & return type enable cascading
    Time &setHour(int);
    Time &setMinute(int);
    Time &setSecond(int);

    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    void printUniversal() const;
    void printStandard() const;

private:
    int hour;
    int minute;
    int second;
};

#endif // TIME_H_INCLUDED

#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date{
public:
    static const int monthsPerYear = 12;
    Date(int = 1,int = 1,int = 1900);//Default Constructor
    void print() const;
    ~Date();//Destructor
private:
    int month;
    int day;
    int year;
    int checkDay(int) const; // Utility Function to check Day
};

#endif // DATE_H_INCLUDED

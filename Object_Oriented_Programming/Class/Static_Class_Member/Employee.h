#ifndef EMPLOYEE_H_INCLUDED
#define EMPLOYEE_H_INCLUDED

#include<string>
using namespace std;

class Employee{
public:
    Employee(const string &, const string &); //Default Constructor
    ~Employee(); //Destructor
    string getFirstName() const;
    string getLastName() const;

    static int getCount(); //Static Member Function
private:
    string firstName;
    string lastName;

    static int count; // Static Data Member
};

#endif // EMPLOYEE_H_INCLUDED

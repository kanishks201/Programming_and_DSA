#include<iostream>
#include "Employee.h"
using namespace std;

int Employee::count = 0; // Initialize Static Data

int Employee::getCount(){
    return count;
}

Employee::Employee(const string &first, const string &last):firstName(first), lastName(last){
    ++count;
    cout<<"Employee Constructor called for "<<firstName<<" "<<lastName<<endl;
}
Employee::~Employee(){
    cout<<"Employee Destructor called for "<<firstName<<" "<<lastName<<endl;
    --count;
}
string Employee::getFirstName() const{
    return firstName;
}
string Employee::getLastName() const{
    return lastName;
}

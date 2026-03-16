#include<iostream>
#include "Employee.h"
#include "Date.h"
using namespace std;
Employee::Employee(const string &first,const string &last,const Date &dateOfbirth,const Date &dateOfhire)
:firstName(first),lastName(last),birthDate(dateOfbirth),hireDate(dateOfhire){
    cout<<"Employee object Constructor : "<<firstName<<" "<<lastName<<endl;
}
void Employee::print() const{
    cout<<lastName<<", "<<firstName<<" Hired";
    hireDate.print();
    cout<<" BirthDay : ";
    birthDate.print();
    cout<<endl;
}
Employee::~Employee(){
    cout<<"Employee object destructor : "<<lastName<<", "<<firstName<<endl;
}

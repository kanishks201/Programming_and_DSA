#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    cout<<"Number of Employee Object before Instantiation : "<<Employee::getCount()<<endl;
    {
        Employee e1("ABC","DEF");
        Employee e2("123","456");
        cout<<"Number of Employee Object after Instantiation : "<<Employee::getCount()<<endl;
        cout<<"\nEmployee 1 : "<<e1.getFirstName()<<" "<<e1.getLastName();
        cout<<"\nEmployee 2 : "<<e2.getFirstName()<<" "<<e2.getLastName()<<endl;
    }
    cout<<"\nNumber of Employee Object Destructor : "<<Employee::getCount();
    return 0;
}

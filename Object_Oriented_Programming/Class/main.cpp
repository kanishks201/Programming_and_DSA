#include <iostream>
#include "Employee.h"
using namespace std;
//Composition : Objects as Members of Classes
int main()
{
    Date birth(7,24,1949);
    Date hire(3,12,1988);
    Employee manager("ABC","XYZ",birth,hire);
    cout<<endl;
    manager.print();
    return 0;
}

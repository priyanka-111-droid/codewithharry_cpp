#include<iostream>
using namespace std;

//base class
class Employee{
    int id;
    
    public:
    float salary;
        Employee(int inpId){
            id=inpId;
            salary=34;
        }

};

//derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    members/methods 
}
*/

//creating a Programmer class derived from Employee base class

int main()
{
    Employee harry(1),rohan(2);
    cout<<harry.salary<<endl;
    cout<<rohan.salary<<endl;
    return 0;
}
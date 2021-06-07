#include <iostream>
using namespace std;

//base class
class Employee
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee()
    {
    }
};

//derived class syntax
/*
class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1. Default vis mode is private
2. Private visibility mode:Public members of base class becomes
PRIVATE members of derived class
3. Public vis mode: public members of base class becomes public members
of derived class
4. private members of base class CANNOT be inherited
*/

//creating a Programmer class derived from Employee base class
class Programmer : public Employee
//calls base class ka constructor,meaning base class ka default const
//so we had to make one
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 9;
    }
    
    void getData(){
        cout<<id<<endl;
    }
};
int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(10);
    cout << skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    //you have privately inherited class
    //so id is now private member of Programmer
    //cannot be printed
    //now add public
    //now it prints...
    skillf.getData();
    return 0;
}
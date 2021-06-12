//pointers to derived class


#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Displaying base class var_base "<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"Displaying base class var1"<<var_base<<endl;
        cout<<"Displaying base class var_derived"<<var_derived<<endl;
    }
};

int main()
{
    //pointer to base class ka jo object banne vala hai
    BaseClass *base_class_pointer;

    BaseClass obj_base;
    DerivedClass obj_derived;

    //base class ka pointer points to der class ka object
    base_class_pointer=&obj_derived;

    //base class ka pointer,if it points to derived class
    //if u use pointer to print display
    //base class ka display print hoga
    base_class_pointer->var_base=34;
    // base_class_pointer->var_derived=88; //throws an error

    base_class_pointer->display();

    
    DerivedClass *derived_class_pointer;
    derived_class_pointer=&obj_derived;
    derived_class_pointer->var_derived=98;
    derived_class_pointer->var_base=99;
    derived_class_pointer->display();


    return 0;
}
//display kaunse call hoga
//we decided at run time

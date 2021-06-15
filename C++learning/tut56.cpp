//virtual function
//if pointer is of base class type
//and base class pointer  is pointing to derived class object
//but we want that derived class ka display run ho
//then make base class ka display virtual
//actual jo compiler binding karta hai(func ke address se object ko associate karna)
//happens at runtime

#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base=1;
    //agar mere type ka pointer derived class ke obj ko point kar raha hai
    //uska display print hona chahiye
    virtual void display(){
        cout<<"1 Displaying base class var_base "<<var_base<<endl;
    }

};
class DerivedClass:public BaseClass{
    public:
    int var_derived=2;
    void display(){
        cout<<"2 Displaying base class var_base :"<<var_base<<endl;
        cout<<"2 Displaying base class var_derived :"<<var_derived<<endl;
    }
};

int main()
{
   BaseClass *base_class_pointer;
// BaseClass obj_base;
   DerivedClass obj_derived;

   base_class_pointer=&obj_derived;
   base_class_pointer->display();


    return 0;
}
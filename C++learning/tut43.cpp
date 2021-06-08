//Ambiguity resolution in multiple inheritance


#include<iostream>
using namespace std;

class Base1{
    public:
    void greet(){
        cout<<"How you doing?"<<endl;
    }
};
class Base2{
    public:
    void greet(){
        cout<<"Kaise ho"<<endl;
    }
};
class Derived: public Base1,public Base2{
    int a;

    //resolving the ambiguity
    public:
        void greet(){
            Base1::greet(); //base1 ka greet use karo compiler!
        }

};


int main()
{

    Base1 b1;
    Base2 b2;
    b1.greet();
    b2.greet();

    Derived d;
    //d.greet();
    //compiler says>
    //d derived from class Base1 and Base2
    //kiska greet print karun?


    //after resolving ambiguity
    d.greet();

    return 0;
    

}
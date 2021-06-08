#include<iostream>
using namespace std;
/*
case 1:
class B:public A{
 //order of execution of constructor->first A() then B()
 As A is base class then derived class
};

case 2:
//multiple inheritance
class A:public B,public C{
//Order of exec of constructor->B() then C() then A()
as there are 2 base classes (B and C) here and B comes first

case3:
class A:public B,virtual public C{
//order of exec of constructor->C() then B() then A()
};

*/
class Base1{
    int data1;
    public:
        Base1(int i){
            data1=i;
            cout<<"Base1 class constructor called"<<endl;
        }
        void print_data1(void){
            cout<<"Value of data1 is"<<data1<<endl;
        }
};
class Base2{
    int data2;
    public:
        Base2(int i){
            data2=i;
            cout<<"Base2 class constructor called"<<endl;
        }
        void print_data2(void){
            cout<<"Value of data2 is"<<data2<<endl;
        }
};
//class Derived:public Base1,public Base2{-->Here Base1 then Base2 then derived const called
class Derived:public Base2,public Base1{
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b){
        //I have to initialize derived1,derived2,data1,data2
        //Derived class ke object se 4 values milne vali hain
        //usme a A ke constructor ko de do
        //b B ke constructor ko de do
        //C and D yahin pe pakad lo
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called"<<endl;
    }
    void print_data3(void){
            cout<<"Value of derived1 is"<<derived1<<endl;
            cout<<"Value of derived2 is"<<derived2<<endl;
    }
};
//};
int main()
{
    Derived d1(1,2,3,4);
    d1.print_data1();
    d1.print_data2();
    d1.print_data3();

    return 0;
}
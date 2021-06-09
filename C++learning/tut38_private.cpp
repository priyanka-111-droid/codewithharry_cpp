//if base class derived privately,how to access its methods?
//getter and setter
//I have to access getdata and setdata methods of base class from derived class...

#include<iostream>
using namespace std;

class Base{
    int data1;//private by default and not inheritable
    //u will have to inherit this using something public getData1()
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();

};

void Base :: setData(void){
    data1=10;
    data2=20;
}
int Base:: getData1(){
    return data1;
}
int Base:: getData2(){
    return data2;
}

class Derived: Base{
    //class being derived privately
    int data3;
    public:
        void process();
        void display();

};
void Derived:: process(){
    setData();
    data3=data2*getData1();
}

void Derived::display(){
    cout<<"Value of data 1 is"<<getData1()<<endl;
    cout<<"Value of data 2 is"<<data2<<endl;
    cout<<"Value of data 3 is"<<data3<<endl;
}
int main()
{
    Derived der;
    //der.setData(); //this has become private
    der.process();
    der.display();


    return 0;
}
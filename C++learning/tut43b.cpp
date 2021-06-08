   
   
//In this case no ambiguity resolution needed
#include<iostream>
using namespace std;

class B{
    public:
        void say(){
            cout<<"Hello world"<<endl;
        }
};
class D:public B{
    int a;
    // public:
    //     void say(){
    //         cout<<"Hello everyone!!!"<<endl;
    //     }
};

int main()
{
   B b;
   b.say();
   D d;
   d.say();
    //if it is not commented,it will print
    //Hello world
    //Hello everyone!!!
    //It will override B's say()
    
    //if you comment out class D's say(),it will print 
    //Hello world
    //Hello world
    
    return 0;
}
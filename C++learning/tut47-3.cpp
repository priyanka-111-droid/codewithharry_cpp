//multiple inheritance
//mode ofinheritance: public SimpleCalculator,public ScientificCalculator
//How is reusability implemented?
//We made Hybrid using Simple and Complex,we 
//didn't have to copy paste same code for hybrid

#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
        void getData1(){
            cout<<"Enter value of a:"<<endl;
            cin>>a;
            cout<<"Enter value of b:"<<endl;
            cin>>b;
        }
        void perform_operations1(){
            cout<<"Value of a+b is"<<a+b<<endl;
            cout<<"Value of a-b is"<<a-b<<endl;
            cout<<"Value of a*b is"<<a*b<<endl;
            cout<<"Value of a/b is"<<a/b<<endl;
            
        }

};
class ScientificCalculator{
        int a,b;
    public:
        void getData2(){
            cout<<"Enter value of a:"<<endl;
            cin>>a;
            cout<<"Enter value of b:"<<endl;
            cin>>b;
        }
        void perform_operations2(){
            cout<<"Value of cos(a) is"<<cos(a)<<endl;
            cout<<"Value of sin(a) is"<<sin(a)<<endl;
            cout<<"Value of exp(a) is"<<exp(a)<<endl;
            cout<<"Value of tan(a) is"<<tan(a)<<endl;
            
        }
};



class HybridCalculator:public SimpleCalculator,public ScientificCalculator{

};
int main()
{
    // SimpleCalculator calc1;
    // calc1.getData();
    // calc1.perform_operations();

    // ScientificCalculator calc1; error as same object name
    // calc1.getData();
    // calc1.perform_operations();

    // SimpleCalculator calc2;
    // calc2.getData();
    // calc2.perform_operations();

    HybridCalculator calc3;
    calc3.getData1();
    calc3.perform_operations1();
    calc3.getData2();
    calc3.perform_operations2();


    return 0;
}
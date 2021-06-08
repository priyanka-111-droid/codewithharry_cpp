#include<iostream>
#include<cmath>
using namespace std;

class SimpleCalculator{
    int a,b;
    public:
        void getData(){
            cout<<"Enter value of a:"<<endl;
            cin>>a;
            cout<<"Enter value of b:"<<endl;
            cin>>b;
        }
        void perform_operations(){
            cout<<"Value of a+b is"<<a+b<<endl;
            cout<<"Value of a-b is"<<a-b<<endl;
            cout<<"Value of a*b is"<<a*b<<endl;
            cout<<"Value of a/b is"<<a/b<<endl;
            
        }

};
class ScientificCalculator{
        int a,b;
    public:
        void getData(){
            cout<<"Enter value of a:"<<endl;
            cin>>a;
            cout<<"Enter value of b:"<<endl;
            cin>>b;
        }
        void perform_operations(){
            cout<<"Value of cos(a) is"<<cos(a)<<endl;
            cout<<"Value of sin(a) is"<<sin(a)<<endl;
            cout<<"Value of exp(a) is"<<exp(a)<<endl;
            cout<<"Value of tan(a) is"<<tan(a)<<endl;
            
        }
};


int main()
{
    SimpleCalculator calc1;
    calc1.getData();
    calc1.perform_operations();

    // ScientificCalculator calc1; error as same object name
    // calc1.getData();
    // calc1.perform_operations();

    SimpleCalculator calc2;
    calc2.getData();
    calc2.perform_operations();


    return 0;
}
#include<iostream>
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


};


int main()
{
    SimpleCalculator calc;
    calc.getData();
    calc.perform_operations();

    return 0;
}
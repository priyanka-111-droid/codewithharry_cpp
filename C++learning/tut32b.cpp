//Complex class mein default para

#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        Complex(int x=0,int y=0){
            a=x;
            b=y;
        }
        void printNum()
        {
            cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;        
        }
};
int main()
{
    Complex c1(4,6);
    c1.printNum();
    Complex c2(5);
    c2.printNum();
    Complex c3;
    c3.printNum();
    return 0;
}
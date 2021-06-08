#include <iostream>
#include<cmath>
using namespace std;
/*
Create 2 classes:
1.SimpleCalculator : Takes input of 2 numbers using utility function
and does +,-,*,/ and displays results using 
another function.
2.ScientificCalculator : Takes input of 2 numbers using utility function
and does 4 scientific operation of your choice

3.Create other class HybridCalculator and 
inherit it using these 2 classes.
Q1.What type of inheritance u using? -->multiple
Q2.Which mode of inheritance u using? -->protected data members ,public member function
Q3.Create object of HybridCalculator and 
display results of simple and scientic 
calculator
Q4.How is code reusability implemented?
*/
class SimpleCalculator
{
    protected:
    int a;
    int b;
    friend void Simplecal(SimpleCalculator p1);
    public:
        SimpleCalculator()
        {
            a=b=0;
        }
        void setData1(){
            int n1,n2;
            cout<<"Enter 2 numbers :";
            cin>>n1>>n2;
            a=n1;
            b=n2;
        }
        int add(){
            return a+b;
        }
        int subtract(){
            return a-b;
        }
        int multiply(){
            return a*b;
        }
        int divide(){
            return a/b;
        }
};
void Simplecal(SimpleCalculator p1){
    cout<<p1.add()<<endl;
    cout<<p1.subtract()<<endl;
    cout<<p1.multiply()<<endl;
    cout<<p1.divide()<<endl;
}

class ScientificCalculator{
    protected:
    int c;
    int d;
    friend void Scientificcal(ScientificCalculator p1);
    public:
        ScientificCalculator()
        {
            c=d=0;
        }
        void setData2(){
            int n3,n4;
            cout<<"Enter 2 numbers :";
            cin>>n3>>n4;
            c=n3;
            d=n4;
        }
        int modulus(){
            return c%d;
        }
        int power(){
            return int(pow(c,d));
        }
        int maxi(){
            return max(c,d);
        }
        int mini(){
            return min(c,d);
        }
};
void Scientificcal(ScientificCalculator p1){
    cout<<p1.modulus()<<endl;
    cout<<p1.power()<<endl;
    cout<<p1.maxi()<<endl;
    cout<<p1.mini()<<endl;
}
class HybridCalc:public SimpleCalculator,public ScientificCalculator{
    // public:
    //     void show(SimpleCalculator s1,ScientificCalculator s2){
    //         s1.setData1();
    //         Simplecal(s1);
    //         s2.setData2();
    //         Scientificcal(s2);
    //     }
};
int main()
{
    SimpleCalculator s1;
    ScientificCalculator s2;
    HybridCalc h;
    //h.show(s1,s2);

    h.setData1();
    Simplecal(h);
    h.setData2();
    Scientificcal(h);

    return 0;
}
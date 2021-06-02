//ek class ke function ko doosre class ka friend
//friend classes
//and Member friend functions
#include<iostream>
using namespace std;
//forward declaration
//I am giving guarantee to compiler that Complex class aage hai
class Complex;

class Calculator{
    public:
        int add(int a,int b){
            return a+b;
        }
        int sumRealComplex(Complex ,Complex );//definition 
        int sumCompComplex(Complex ,Complex );//definition 
};
class Complex{
    int a,b;
    //individually declaring function as friends
    friend int Calculator :: sumRealComplex(Complex ,Complex );//definition 
    friend int Calculator :: sumCompComplex(Complex ,Complex );//definition 

    //or:declare entire Calculator class as friend
    friend class Calculator;
    
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        
        void display(void){
            cout<<"Your number is:"<<a<<+"+"<<b<<"i"<<endl;
        }
};
int Calculator :: sumCompComplex(Complex o1,Complex o2){
            return (o1.b+o2.b);
}

int main(){
    Complex o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(5,7);
    Calculator calc;
    int resc=calc.sumCompComplex(o1,o2);
    cout<<"Sum of comp part of o1 and o2:"<<resc<<endl;
    return 0;
}

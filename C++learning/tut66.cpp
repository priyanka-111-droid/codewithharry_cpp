//class templates with default parameters

#include<iostream>
using namespace std;
template<class T1=int,class T2=float>

class Priya{
    public:
    T1 a;
    T2 b;
    Priya(T1 a1,T2 b1){
        a=a1;
        b=b1;
    }
    void display(){
        cout<<"values of a is "<<a<<endl;
        cout<<"values of b is "<<b<<endl;

    }
};

int main()
{
    // Priya<> p(3.33,6); // prints 3 and 6
    // Priya<> p(3.33,6.66); //prints 3 and 6
    // Priya<> p(3,6.7);
    // p.display();

    Priya<char,char> p('a','c');
    p.display();

    return 0;
}
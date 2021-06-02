//tut8:constants,manipulators,operator precedence
#include<iostream>
#include<iomanip>//for manipulator
using namespace std;

int main()
{
    // const int a=3;
    // cout<<a;
    // a=45;
    // cout<<a;

    /**manipulators like endl**/
    // int a=3,b=78,c=1233;
    // cout<<"value of a is :"<<setw(4)<<a<<endl;
    // cout<<"value of a is :"<<setw(4)<<b<<endl;
    // cout<<"value of a is :"<<setw(4)<<c<<endl;

    /*operator prec**/
    //what has highest prec,put ()
    //if prec same,use associativity
    int a=3,b=4;
    int c=((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}
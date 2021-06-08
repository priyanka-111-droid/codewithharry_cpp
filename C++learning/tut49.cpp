//Initialization list in constructors
/*
Syntax:
constructor(argument-list):initialization-section{
    assignment +other code...
}

*/
#include<iostream>
using namespace std;
class Test{
    int a;int b;
    public:

        //Test(int i,int j):a(i),b(j){
            //a ko i ki value milegi
            //b ko j ki value milegi
            //Test(int i,int j):a(i),b(i+j){-->works
            //Test(int i,int j):a(i),b(a+j){-->works too,a:4 and b:10
            //Test(int i,int j):b(a+j),a(i){-->works too,a:4 and b:10
            Test(int i,int j):b(j),a(i+b){
                // above,a is declared first then b
                //Hence a is initialized first
                //so the above line creates problem...
            cout<<"Constructor executed"<<endl;
            cout<<"value of a "<<a<<endl;//-->420911
            cout<<"value of b "<<b<<endl;//-->6
            }
};
int main()
{
    Test t(4,6);
    return 0;
}
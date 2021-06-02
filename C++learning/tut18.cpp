//RECURSION

#include<iostream>
using namespace std;
int factorial(int n=6){
    if(n<=1){
        return 1;
    }
    else 
    return n*factorial(n-1);
}
int fib(int a)
{
    if(a==0 || a==1)
    return 1;
    else 
    return fib(a-2)+fib(a-1);
}
int main()
{
    //factorial
    //6!=6*5*4*3*2*1= 720
    //0!=1 and 1!=1
    //n!=n*(n-1)!
    cout<<factorial();
    int a=3;
    cout<<"Term in fibonacci seq at index "<<a<<"is"<<fib(a);
    return 0;
}
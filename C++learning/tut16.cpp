//call by val and call by ref

#include<iostream>
using namespace std;
//won't swap
void swap(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
}
//call by ref by c++ ref pointers
void swapPointer(int* a,int* b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//call by address using ref var
void swapRefVar(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int a=4,b=5;
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
    // swap(a,b);
    // cout<<"value of a "<<a<<endl;
    // cout<<"value of b "<<b<<endl;
    // swapPointer(&a,&b);
    // cout<<"value of a "<<a<<endl;
    // cout<<"value of b "<<b<<endl;
    swapRefVar(a,b);
    cout<<"value of a "<<a<<endl;
    cout<<"value of b "<<b<<endl;
    return 0;
}
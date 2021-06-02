//pointers
#include<iostream>
using namespace std;

int main()
{
    //what is a pointer?
    //datatype that holds address of other datatypes
    int a=3;
    int *p=&a;
    cout<<p<<endl;
    cout<<&a<<endl;


    //&-->Address of operator
    //* -->(value at)Dereference operator
    cout<<*p;

    //Pointer to pointer
    int **c=&p;
    cout<<"Address of p is"<<&p<<endl;
     cout<<"Address of p is"<<c<<endl;
      cout<<"value at address c is"<<*c<<endl;
       cout<<"value at address value_at(value_at(c)) is"<<**c<<endl;
    return 0;
}
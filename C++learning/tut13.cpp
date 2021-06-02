//Arrays and pointers

//Array name is address of first block
//&arr_name is WRONG
#include<iostream>
using namespace std;

int main()
{
    int marks[]={23,45,67,99};
    int *p=marks;
    cout<<*(p++)<<endl; //23
    cout<<*p<<endl;     //45

    // cout<<"values at marks[0]"<<*p<<endl;
    // cout<<"values at marks[0]"<<*(p+1)<<endl;
    // cout<<"values at marks[0]"<<*(p+2)<<endl;
    // cout<<"values at marks[0]"<<*(p+3)<<endl;

    return 0;
}
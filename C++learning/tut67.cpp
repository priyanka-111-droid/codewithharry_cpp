//C++ function templates
//function templates with parameters
//instead of overloaded functions
//try function templates

#include<iostream>
using namespace std;

// int funcAverage(int a,int b){
//     float avg=(a+b)/2;
//     return avg;
// }

template<class T>
void swapp(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}


template<class T1,class T2>
float funcAverage2(T1 a,T2 b){
    float avg=(a+b)/3;
    return avg;
}

int main()
{
    // float a;
    // a=funcAverage(5,3);
    // cout<<a;
    cout<<funcAverage2(2.1,2)<<endl;

    int x=3,y=4;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}
//revisiting pointers:new and delete
#include<iostream>
using namespace std;

int main()
{
    //basic example
    int a=4;
    int *ptr=&a;
    cout<<"value of a is"<<*(ptr)<<endl;

    //new(dynamic initialization)
    int *p=new int(40);
    cout<<"value of at address p is"<<*(p)<<endl;//40

    float *p1=new float(40.5);
    cout<<"value of at address p1 is"<<*(p1)<<endl;//40.5
    //allocate block of memory
    int *arr=new int[3];
    arr[0]=10;
    //arr[1]=11;
    *(arr+1)=22;
    arr[2]=45;
    
    //delete dyn alloc array
    //delete[] arr;

    cout<<"value of arr[0] is"<<arr[0]<<endl;
    cout<<"value of arr[1] is"<<arr[1]<<endl;
    cout<<"value of arr[2] is"<<arr[2]<<endl;

    return 0;
}
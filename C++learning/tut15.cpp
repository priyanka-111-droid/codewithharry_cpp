//function and function prototype...
#include<iostream>
using namespace std;
int sum(int a,int b){
    int c=a+b;
    return c;
}

int main()
{
    int n1,n2;
    cout<<"enter value of n1:\n";
    cin>>n1;
    cout<<"enter value of n2:\n";
    cin>>n2;
    cout<<"sum is "<<sum(n1,n2);
    return 0;
}
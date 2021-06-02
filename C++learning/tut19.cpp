//function overloading
//if float,promotion occurs

#include<iostream>
using namespace std;
int sum(float a,int b){
    cout<<"func with 2 args"<<endl;
    return a+b;
}
int sum(int a,int b,int c){
     cout<<"func with 3 args"<<endl;
    return a+b+c;
}
int main()
{
    cout<<"Sum of 3 and 6 is"<<sum(3,6)<<endl;
    cout<<"Sum of 3 and 6 and 7 is"<<sum(3,6,7)<<endl;
    return 0;
}
//tut 7:ref var and typecasting
//operator
//global and local var
//variables and literals
//reference
//typecasting
#include<iostream>
using namespace std;
int c=45;
int main()
{
    int a,b,c;
    cout<<"value if a"<<endl;
    cin>>a;
    cout<<"value of b"<<endl;
    cin>>b;
    c=a+b;
    cout<<"sum is"<<c<<endl;
    cout<<"global c is:"<<::c<<endl;//scope reso op
    /**float,double,long double literals**/

    float d=34.4f;
    long double e=34.4l;
    //decimal literal default double in c++
    //to make it float,use f
    
    cout<<"value of d is"<<d<<" value of e is"<<e<<endl;
    cout<<"value of 34.4 is"<<sizeof(34.4)<<endl ;
    cout<<"value of 34.4f is"<<sizeof(34.4f)<<endl;
    cout<<"value of 34.4F is"<<sizeof(34.4F)<<endl;
    cout<<"value of 34.4l is"<<sizeof(34.4l)<<endl;
    cout<<"value of 34.4L is"<<sizeof(34.4L)<<endl;

    /**reference var**/
    float x=344;
    float &y=x;
    cout<<x<<endl;
    cout<<y<<endl;

    /**type casting**/
    int z=45;
    cout<<"value of z is"<<(float)z;
    cout<<"value of z is"<<float(z);
    return 0;
}
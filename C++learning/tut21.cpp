//OOP begins;)
//for data protection,u can't use struct
#include<iostream>
using namespace std;
class Employee
{
    private:
        int a,b,c;
    public:
        int d,e;
        void setData(int a1,int b1,int c1);//declaration
        void getData(){
            cout<<"value of a is"<<a<<endl;
            cout<<"value of b is"<<b<<endl;
            cout<<"value of c is"<<c<<endl;
            cout<<"value of d is"<<d<<endl;
            cout<<"value of e is"<<e<<endl;
        }
};
void Employee :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main()
{
    Employee e1;//object of class
    e1.setData(1,2,4);
    //e1.a=125; coz a is private,u can't set it directly,u need method
    e1.d=23;
    e1.e=26;
    e1.getData();
    return 0;
}
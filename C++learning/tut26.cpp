//friend functions
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend Complex sumCom(Complex o1,Complex o2);
        void display(void){
            cout<<"Your number is:"<<a<<+"+"<<b<<"i"<<endl;
        }
};

//this is foreign function
//class does not know function
//can be chor
//so Compiler acts as police..
Complex sumCom(Complex o1,Complex o2){
    //sumCom why u want to access private data of class when u r outside class?
    Complex o3;
    //cout<<a;//invalid,iska a?
    //compiler ji,Complex gave me permission
    //Compiler says next time tell Complex to give declaration 
    //that sumCom is my friend
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.display();
    c2.setNumber(2,5);
    c2.display();
    sum=sumCom(c1,c2);
    sum.display();
    return 0;
}
/*properties of friend functions
1.Not in scope of class
2.since not in scope of class,cannot be called from
object of that class.
c1.sumCom()==invalid
3.can be invoked with help of object
4.Usually has objects as arguments
5.Can be declared inside public or private section of class
6.Cannot access member directly by name and needs
object_name.member_name to access member

*/
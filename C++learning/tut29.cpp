//constructors
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //creating constructor
    /*constructor is special member function ,with same name of class 
    ,to initialize objects of its class, 
    automatically invoked when object created.*/

    Complex(void); //constructor declaration
   void display(void){
    cout<<"Your number is:"<<a<<+"+"<<b<<"i"<<endl;
    }
};
Complex :: Complex(void)//default constructor
{
    a=0;
    b=0;
    //cout<<"Hello world";//gets printed
}
int main()
{
    Complex c1,c2,c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}
/*Charactertistics of constructor
1.Declared in public section of class
2.Automatically invoked during object creation
3.No return type(not void too) and cannot return values
4.can have deafult arguments
5.we cannot refer to their address
*/

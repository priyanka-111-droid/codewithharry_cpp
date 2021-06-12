//this keyword is pointer
//points to object that invokes member function
//jo object ke liye setData() run ho raha hai
//us object ke liye set a to the parameter se aane wala a
//arrow pointer used for pointer



#include<iostream>
using namespace std;
class A{
    int a;//class variable
    public:
        void setData(int a){
            // a=a; 
            //in c++,priority given to local variable,so local a accessed
            //so garbage printed.
            this->a=a;
        }
        void getData(){
            cout<<"value of a is:"<<a<<endl;

        }
};


int main()
{
    
    A ob;
    ob.setData(4);
    ob.getData(); //prints garbage data,no error message


    return 0;
}
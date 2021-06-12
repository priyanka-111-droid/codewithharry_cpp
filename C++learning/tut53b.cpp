//returning this keyword

#include<iostream>
using namespace std;
class A{
    int a;//class variable
    public:
        A& setData(int a){
            
            this->a=a;
            return *this;
            //returning  object
        }
        void getData(){
            cout<<"value of a is:"<<a<<endl;

        }
};


int main()
{
    
    A ob;
    ob.setData(4).getData();//object par .getData()
    ob.getData(); //prints garbage data,no error message


    return 0;
}
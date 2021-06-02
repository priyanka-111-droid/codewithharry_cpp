//copy constructor
//doosre object ki copy banata hai
#include<iostream>
using namespace std;
class Number{
    int a;
    public:
        Number(){
            a=99;
        }
        Number(int num){
            a=num;
        }
        /*WHEN NO copy cons found,COMPILER
        gives its own copy constructor*/

        // Number(Number &obj){
        //     cout<<"copy const called"<<endl;
        //     a=obj.a;
        // }
        void display(){
            cout<<a<<endl;
        }
} ;
int main()
{
   Number x,y,z(45),z2;
   x.display();
   y.display();
    z.display();
    // z1 shd exactly resember z
    Number z1(x);//copy cons invoked
    z1.display();
    z2=z;//copy cons not called as invoked above aur yaha sirf assignment hain
    Number z3=z;//it gets called as yehi line pe banaya hai
    return 0;
}
//pointer to obj and arrow operator
//arrow if dynamic mostly

#include<iostream>
using namespace std;
class Complex{
    int r,i;
    public:
        void setdata(int a,int b){
            r=a;
            i=b;
        }
        void getdata(){
            cout<<"real part"<<r<<endl;
            cout<<"imag part"<<i<<endl;

        }
        
};
int main()
{
    Complex c1;

    //Complex *ptr= &c1;
    Complex *ptr=new Complex;

    //(*ptr).setdata(1,54);//bracket important
    ptr->setdata(1,54);
    //ptr jis obj ko point kar raha hai,uska set data

    //(*ptr).getdata();//since dot more prec than *
    ptr->getdata();

    //Array of objects
    Complex *ptr1=new Complex[4];
    ptr1->setdata(1,4);
    ptr1->getdata();

    return 0;
}
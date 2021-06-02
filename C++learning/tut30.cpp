//default and paramet constructor
#include<iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    //Complex(void); //default constructor declaration
    Complex(int,int);//param con
    void display(void){
    cout<<"Your number is:"<<a<<+"+"<<b<<"i"<<endl;
    }
};
// Complex :: Complex(void)//default constructor
// {
//     a=0;
//     b=0;
//     //cout<<"Hello world";//gets printed
// }
Complex :: Complex(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    //implicit call
    Complex o1(4,5);
    o1.display();
    //explicit call
    Complex o2=Complex(9,12);
    o2.display();
    
    return 0;
}

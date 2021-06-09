#include<iostream>
using namespace std;
//base class
class A{
    public:
    void Afun(void);
};
void A::Afun(void){
    cout<<"I am body of Afun"<<endl;
}
//derived class
class B:public A{
    public:
    void Bfun(void);
};
void B::Bfun(void){
    cout<<"I am body of Bfun"<<endl;
}
int main()
{
    B obj;
    obj.Bfun();
    obj.Afun();
    return 0;
}

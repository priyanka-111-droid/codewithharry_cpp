#include<iostream>
using namespace std;
class A{
    private:
    int a;
    protected:
    int x; //accessed by derived class
    public:
    void setVal(int v){
        x=v;
    }
};
class B:public A{
    public:
    void printVal(void){
        setVal(10);//access public member function
        cout<<"x is:"<<x<<endl;//access protected data member
    }
};
int main()
{
    B obj;
    obj.printVal();
    return 0;
}
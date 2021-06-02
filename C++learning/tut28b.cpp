//friend function to exchange values
//by call by reference
//whatever object it takes will get changed
#include<iostream>
using namespace std;
class c2;
class c1{
    int val1;
    friend void exchange(c1 &x,c2 &y);
    public:
        void setdata(int a){
            val1=a;
        }
        void display(void){
            cout<<val1<<endl;
        }
};
class c2{
    int val2;
    friend void exchange(c1 &x,c2 &y);
    public:
        void setdata(int a){
            val2=a;
        }
        void display(void){
            cout<<val2<<endl;
        }
};
void exchange(c1 &x,c2 &y){
    int tmp=x.val1;
    x.val1=y.val2;
    y.val2=tmp;
}
int main()
{
    c1 objc1;
    c2 objc2;
    objc1.setdata(34);
    objc2.setdata(67);
    exchange(objc1,objc2);
    cout<<"value after exchanging is:";
    objc1.display();
    cout<<"value after exchanging is:";
    objc2.display();
    return 0;
}
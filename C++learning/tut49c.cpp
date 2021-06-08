//different syntaxes in constructor initialization lists
#include<iostream>
using namespace std;
class Test{
    int a;
    int b;
    public:
            
            Test(int i,int j):a(i){
            b=j;
            cout<<"Constructor executed"<<endl;
            cout<<"value of a "<<a<<endl;//-->4
            cout<<"value of b "<<b<<endl;//-->6
            }
};
int main()
{
    Test t(4,6);
    return 0;
}
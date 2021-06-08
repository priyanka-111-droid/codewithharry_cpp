//constructor initialization lists
//changing order of declaration of variables
#include<iostream>
using namespace std;
class Test{
    int b;//b declared first
    int a;

    public:
            
            Test(int i,int j):b(j),a(i+b){
            //after declaring b first and a second
            //this code works with no issues
            cout<<"Constructor executed"<<endl;
            cout<<"value of a "<<a<<endl;//-->10
            cout<<"value of b "<<b<<endl;//-->6
            }
};
int main()
{
    Test t(4,6);
    return 0;
}
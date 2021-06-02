//constructor with default para
#include<iostream>
using namespace std;
class Simple{
    int data1;
    int data2;
    public:
    Simple(int a,int b=9){
        data1=a;
        data2=b;
    }
    void printNum();
};
void Simple :: printNum(){
    cout<<"value of data is"<<data1<<"and"<<data2<<endl;
}
int main()
{
   Simple s(1);
   s.printNum();
    return 0;
}
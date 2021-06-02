//destructor
#include<iostream>
using namespace std;
//destructor never takes arg or returns any value
int count=0;
class Num{
    public:
    Num(){
        count++;
        cout<<"time when cons called for obj number "<<count<<endl;
    }
    ~Num(){
        cout<<"Time when destructor called for obj number"<<count<<endl;
        count--;
    }
};
int main()
{
    cout<<"This is main"<<endl;
    cout<<"creating 1st obj n1"<<endl;
    Num n1;
    {
         cout<<"Enter this block"<<endl;
    cout<<"creating 2 more obj"<<endl;
    Num n2,n3;
    cout<<"Exiting this block"<<endl;
    }
   cout<<"Back to main"<<endl;
    return 0;
}
//Dynamic init of objects using constructor
#include<iostream>
using namespace std;
class Bankdep{
    int principal;
    int yrs;
    float interest;
    float returnval;
    public:
        Bankdep(){}//for bd3 as when obj called const also called
        Bankdep(int p,int y,float r);//r is like 0.04
        Bankdep(int p,int y,int r);
        void show();
};
Bankdep :: Bankdep(int p,int y,float r){
    principal=p;
    yrs=y;
    interest=r;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
        returnval=returnval*(1+interest);

    }   
}
Bankdep :: Bankdep(int p,int y,int r){
    principal=p;
    yrs=y;
    interest=float(r)/100;
    returnval=principal;
    for (int i = 0; i < y; i++)
    {
        returnval=returnval*(1+interest);

    }   
}
void Bankdep :: show(){
    cout<<endl<<"principal was"<<principal
    <<"return value after"<<yrs
    <<"is"<<returnval<<endl;
}
int main()
{
    Bankdep bd1,bd2,bd3;
    int p,y;
    float r;
    int R;
    cout<<"Enter p,y,r";
    cin>>p>>y>>r;
    bd1=Bankdep(p,y,r);
    bd1.show();
    cout<<"Enter p,y,R";
    cin>>p>>y>>R;
    bd2=Bankdep(p,y,R);
    bd2.show();
    return 0;
}
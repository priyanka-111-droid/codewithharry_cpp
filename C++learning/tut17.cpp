//Inline functions,default arg,const arg

#include<iostream>
using namespace std;
/***<<<<<INLINE>>>>>****/

//gets replaced with product() in compile time itself
//but too many functions can inc memory
//don't use if recursion and static var and loops and switch
inline int product(int a,int b){
    //return a*b;
    static int c=0;//executes only once
    c=c+1; //next time func runs,value of c is retained
    return a*b+c;

}

/**<<<DEFAULT ARGS>>>>***/
//default args tow RIGHT
int moneyRec(int currMoney,float factor=1.04)
{
    return currMoney*factor;
}
/****<<<CONST ARGS>>>**/
//compiler won't let u accidentally change arg
//if u pass arg by reference 
// int strlen(const char *p)
// {
// }
int main()
{
    // int n1,n2;
    // cout<<"enter value of n1:\n";
    // cin>>n1;
    // cout<<"enter value of n2:\n";
    // cin>>n2;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    // cout<<"product is "<<product(n1,n2)<<endl;
    int money=1000;
    cout<<moneyRec(money);
    return 0;
}
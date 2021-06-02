//structures,unions,enum
#include<iostream>
using namespace std;
/** <<<STRUCT>>>>**/
//user def datatype for diff datatype
// struct employee
// {
//     /* data */
//     int eId;
//     char favChar;
//     float salary;
// };
typedef struct employee
{
     int eId;
     char favChar;
     float salary;
}ep;
/*****<<<UNION>>>*****/
union money
{
    //for money,u use 1 of 3 means ONLY!!!
    int rice;
    char car;
    float pounds;
};


int main()
{
    //struct employee Priyanka;
    ep Priyanka;
    Priyanka.eId=1;
    Priyanka.favChar='c';
    Priyanka.salary=1200000;
    cout<<"The value is"<<Priyanka.eId<<endl;
    cout<<"The value is"<<Priyanka.favChar<<endl;
    cout<<"The value is"<<Priyanka.salary<<endl;

    union money m1;
    m1.rice=34;
    cout<<m1.rice<<endl;

    /*****<<<ENUM>>>****/
    enum Meal{breakfast,lunch,dinner};
    cout<<breakfast;//0
    cout<<lunch;//1
    cout<<dinner;//2
    return 0;
}
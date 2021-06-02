//array of objects 
#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:
        void setId(void){
            salary=122;
            cout<<"Enter id :";
            cin>>id;
        }
        void getId(void){
            cout<<"The id of emp is"<<id<<endl;

        }
};//no semi colon means syntax arror!!
int main()
{
    // Employee h,r,l,s;
    // h.setId();
    // h.getId();
    Employee fb[4];//my company's 4 emp
    for (int i = 0; i < 4; i++)
    {
        /* code */
        fb[i].setId();
        fb[i].getId();
    }
    return 0;
}
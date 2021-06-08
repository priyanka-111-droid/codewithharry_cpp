//Array of objects using pointers

#include<iostream>
using namespace std;
class Shopitem{
    int id;
    float price;
    public:
        void set_data(int a,int b){
            id=a;
            price=b;
        }
        void get_data(void){
            cout<<"code of item is"<<id
            <<endl;
            cout<<"price of item is"<<price
            <<endl;
        }

};

int main()
{
    int size=3;
    //Here I have used int datatype for pointer
    //int *ptr=&size;
    //I am telling compiler,dynamically 34 int store karne ke liye  memory allocate kar  do
    //int *ptr=new int[34];


    //Now here I will use Shopitem datatype that I made using class,
    //ptr points to Shopitem type ka 3 item objects
    //Shopitem ke andhar 3 item hain:
    //1.general item
    //2.veggie  item
    //3.hardware item
    Shopitem *ptr=new Shopitem[size];//making 2 shop objects of shop class
    Shopitem *ptrTemp=ptr;

    int p;int q;
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item"<<i+1<<endl;
        cin>>p>>q;
        (*ptr).set_data(p,q);
        ptr++;
    }
    //here ptr will point to some other memory location after 3 items
    //so we use ptrTemp 
    //or you can do ptr=ptr-size
    //to bring back pointer to point to first item
    ptr=ptr-size;
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number:"<<i+1<<endl;
        (*ptr).get_data();
        ptr++;
    }
    return 0;
}
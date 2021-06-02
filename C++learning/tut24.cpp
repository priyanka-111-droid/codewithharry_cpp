//static data members and methods

#include<iostream>
using namespace std;
//static var written outside class!!!
//by default zero se init!!!

class Employee{
    //int count;//har obj ka apna count
    int id;
    static int count;

    public:
        void setData(void){
            cout<<"Enter"<<endl;
            cin>>id;
            count++;
        }
        void getData(void){
            
            cout<<"Id of emp is:"<<id<<"and this is employee number "<<count<<endl;
        }
        static void getCount(void){
            //only accessed by static var
            cout<<"count value is"<<count<<endl;
            //cout<<id;//ERROR!
        }
};

int Employee:: count;//Employee class ka count var make it static
//coz iske memory obj ke saath nahi ,class ke saath aayegi
//so declare outside class
//count var ek baar memory lega,uske baad update hoga...

int main()
{
    Employee Priya,Indira,Rajan;
    // Priya.id=1;
    // Priya.count=1;//cannot do as id,count private
    Priya.setData();
    Priya.getData();
    Employee::getCount();

    Indira.setData();
    Indira.getData();
    Employee::getCount();

    Rajan.setData();
    Rajan.getData();
    Employee::getCount();
    return 0;
}
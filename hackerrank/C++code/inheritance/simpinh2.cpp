//C++ program to read and 
//print students information 
//using two classes 
//and simple inheritance

#include<iostream>
using namespace std;
//base class
class Student{
    private:
        char name[30];
        int  age;
        char gender;
    public:
        void getBasicInfo(void);
        void putBasicInfo(void);
};
void Student::getBasicInfo(void)
{
    cout << "Enter student's basic information:" << endl;
    cout << "Name?: ";    
    cin >> name;
    cout << "Age?: ";     
    cin >> age;
    cout << "Gender?: ";
    cin >> gender;
}
void Student::putBasicInfo(void)
{
    cout << "Name: " << name << ",Age: " << age << ",Gender: " << gender << endl;
}
////////////////////////////////////
//derived class
class Result:public Student {
    private:
        int     totalM;
        float   perc;
        char    grade;
    public:
        void getResultInfo(void);
        void putResultInfo(void);
};
//function definitions
void Result::getResultInfo(void)
{
    cout << "Enter student's result information:" << endl;
    cout << "Total Marks?: ";     cin >> totalM;
    perc= (float)((totalM*100)/500);
    cout << "Grade?: ";cin >> grade;
}
void Result::putResultInfo(void){
     cout << "Total Marks: " << totalM << ",Percentage: " << perc << ",Grade: " << grade << endl;
}
int main()
{
    Result obj;
    //read student basic and result information
    obj.getBasicInfo();
    obj.getResultInfo();
 
    //print student basic and result information
    obj.putBasicInfo();
    obj.putResultInfo();
    return 0;
}
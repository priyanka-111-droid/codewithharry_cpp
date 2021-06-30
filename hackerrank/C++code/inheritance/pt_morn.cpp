#include<iostream>
#include<string>
using namespace std;
class Student{
    protected:
    int regno;
    string name;
    string dep;
    public:
     void set_num(int a,string nm,string d){
            regno=a;
            name=nm;
            dep=d;
    }
    void print_num(void){
            cout<<"Your roll no is:"<<regno<<endl;
    }

};
class internal_marks:virtual public Student{
    protected:
    int cat1;
    int cat2;
    int quiz1;
    int quiz2;
    int assignment;

    public:
    void set_internal(float c1,float c2,float q1,float q2,float ant){
            cat1=c1;
            cat2=c2;
            quiz1=q1;
            quiz2=q2;
            assignment=ant;
    }
};
class TEE:virtual public Student{
    protected:
    float fat;
    public:
    void set_TEE(int f){
        fat=f;
    }
};
class Result:public internal_marks,public TEE{
    private:
        float internal_total;
        float final_marks;

    public:
        void calc_result(){
            internal_total= cat1/2+cat2/2+quiz1+quiz2+assignment;
            final_marks=internal_total+fat*0.4;
        }
        void display_result(void){
            cout<<internal_total<<endl;
            cout<<final_marks<<endl;
        }

};

int main()
{
    int rn;string n;string d;
    float m1,m2,m3,m4,m5,m6;
    cout<<"Enter reg no  :";
    cin>>rn;
    cout<<"Enter name:";
    cin>>n;
    cout<<"Enter department :";
    cin>>d;
    cout<<"Enter cat1,cat2,quiz1,quiz2,assignment marks:";
    cin>>m1>>m2>>m3>>m4>>m5;
    cout<<"enter fat marks :";
    cin>>m6;

    Result r;
    r.set_num(rn,n,d);
    r.set_internal(m1,m2,m3,m4,m5);
    r.set_TEE(m6);
    r.print_num();
    r.calc_result();
    r.display_result();
    return 0;
}
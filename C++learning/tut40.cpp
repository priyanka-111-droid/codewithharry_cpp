/*
for a protected member:
                        Public derivation Private Der    Protected Der
    1.Private members       Not inh          No inh         not inh  
    2.Protected members     protected        private        protected
    3.Public members        public           private        protected
*/

#include<iostream>
using namespace std;
class Student{
    protected:
        int roll_number;
    public:
        void set_rollnum(int);
        void get_rollnum(void);//return or print,so takes void


};
void Student:: set_rollnum(int r){
    roll_number=r;
}
void Student :: get_rollnum(){
    cout<<roll_number<<endl;
}

//Exam class
class Exam:public Student{
    protected:
        float maths;
        float physics;
    public: 
        void set_marks(float,float);
        void get_marks(void);
};
void Exam:: set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}
void Exam:: get_marks(){
    cout<<maths<<endl;
    cout<<physics<<endl;
}

//Result class
class Result: public Exam{
    float percentage;
    public:
        void display_results(){
            cout<<"Percentage is "<<(maths+physics)/2<<endl;
        }


};

int main()
{
    /*
    Notes:
    If we are inheriting B from A and C from B[A-->B-->C0]
    1.A is base class for B and B base class for C
    2.A-->B-->C is called inheritance path
    */
    Result harry;
    harry.set_rollnum(420);
    harry.set_marks(97.0,98.1);
    harry.display_results();

    return 0;
}
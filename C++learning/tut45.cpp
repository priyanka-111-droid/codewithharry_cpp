#include<iostream>
using namespace std;
/*
Inheritance:
Student-->Test[done]
Student-->Sports[done]
Test-->Result[done]
Sports-->Result[done]
*/

class Student{
    protected:
        int roll_no;
    public:
        void set_num(int a){
            roll_no=a;
        }
        void print_num(void){
            cout<<"Your roll no is:"<<roll_no<<endl;
        }
};
class Test: virtual public Student{
    protected:
        float maths,physics;
    public:
        void set_marks(float m1,float m2){
            maths=m1;
            physics=m2;
        }
        void print_marks(void){
            cout<<"Your result is here: "<<endl 
                <<"Maths marks:"<<maths<<endl 
                <<"Physics marks:"<<physics<<endl;
        }
};

class Sports: virtual public Student{
    protected:
        float score;
    public:
        void set_score(float s){
            score=s;
        }
        void print_score(void){
            cout<<"Your PT score is:"<<score<<endl;
        }
};

class Result:public Test,public Sports{
    private:
        float total;
    public:
        void display(void){
            total=score+maths+physics;
            print_num();
            print_marks();
            print_score();
            cout<<"Total score is:"<<total<<endl;
        }
};


int main()
{
    Result r;
    r.set_num(11);
    r.set_marks(78,89);
    r.set_score(70);
    r.display();
    return 0;
}
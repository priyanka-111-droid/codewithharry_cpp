#include<iostream>
using namespace std;

class Person{
    protected:
    string name;
    int age;
    public:
    virtual void getdata(){
            // cout<<"Enter name";
            cin>>name;
            // cout<<"age";
            cin>>age;
    }
    virtual void putdata(void){
            cout<<name<<endl;
            cout<<age<<endl;
    }
};


class Professor:public Person{    
    public:
    int publications;
    static int id;
    int cur_id;

        Professor(){
            cur_id=id++;
        }
        void getdata(){
            // cout<<"Enter name";
            cin>>name;
            // cout<<"age";
            cin>>age;
            // cout<<"publications";
            cin>>publications;
        }
        void putdata(void){
            cout<<name<<" ";
            cout<<age<<" ";
            cout<<publications<<" ";
            cout<<cur_id<<endl;
        }
};
int Professor::id=1;//1


class Student:public Person{
      
      public:
      int *marks;
      int sum;
      static int id;
      int cur_id;

    Student(){
        cur_id=id++;
    }

    void getdata(){
        sum=0;
        marks=new int[6];
        // cout<<"Enter name";
        cin>>name;
        // cout<<"age";
        cin>>age;
        // cout<<"marks";
        for (int i = 0; i < 6; i++)
        {
            cin>>*(marks+i);
            sum=sum+*(marks+i);
        }
    }

    void putdata(void){
        cout<<name<<" ";
        cout<<age<<" ";
        cout<<sum<<" ";
        cout<<cur_id<<endl;
    }
};
int Student::id=1;



int main()
{
    // Professor der_obj1;
    // Student der_obj2;
    int num_obj,temp_num_obj;
    cout<<"enter number of objects to be created :";
    cin>>num_obj;
    temp_num_obj=num_obj;
    // cout<<temp_num_obj;
    Person *base_ptr[num_obj];
    
    int i=0;
    while(num_obj!=0){
        int choice;
        cout<<"Enter 1 or 2 :";
        cin>>choice;
        if(choice==1){//professor   
        base_ptr[i]=new Professor;
        // base_ptr[i]->getdata();
        // base_ptr[i]->putdata();
        }
        else if(choice==2){//student
            base_ptr[i]=new Student;
            // base_ptr[i]->getdata();
            // base_ptr[i]->putdata();
        }
        base_ptr[i]->getdata();
        
        num_obj--;
        i++;
    }

    for(int j=0;j<temp_num_obj;j++)
        base_ptr[j]->putdata(); // Print the required output for each object.


    return 0;
}
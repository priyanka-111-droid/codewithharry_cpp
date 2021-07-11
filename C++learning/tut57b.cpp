//virtual functions example 2

#include<iostream>
using namespace std;
class Animal
{
    protected:
    int itsAge;
    public:
        Animal(int age){
            itsAge = age;
        }
        virtual void Eat(){
            cout << "Animal eats food"<<endl;
        }
        virtual int get_Age(){
            return itsAge;
        }

};

class Dog: public Animal{
public:
    Dog(int age=0) : Animal(age) {}
    void Eat(){
        cout << "Dog eats meat"<<endl;
    }
    int get_Age(){
        return itsAge;
    }
};

class Cat: public Animal{
public:
    Cat(int age=0): Animal(age){}
    void Eat(){
        cout << "Cat eats meat"<<endl;
    }
    int get_Age(){
        return itsAge;
    }
};
int main()
{
    Dog d(5);
    Cat c(3);

    Animal *baseptr;
    baseptr=&d;
    baseptr->Eat();
    cout<<"Dog's age is:"<<baseptr->get_Age()<<endl;

    baseptr=&c;
     baseptr->Eat();
    cout<<"Cat's age is:"<<baseptr->get_Age()<<endl;

    
    return 0;
}
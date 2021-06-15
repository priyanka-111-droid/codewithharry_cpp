// Member function templates and
//  overloading template functions.

//overloading-->
//agar exact match hain,voh run hota hain
//varna exact match banaya ja sakta hain,that runs

#include<iostream>
using namespace std;

template<class T>
class Priyanka{
    public:
    int data;
    
    Priyanka(T a){
        data=a;

    }
    void display();
};

template <class T>
void Priyanka<T>:: display(){
        cout<<data;
}

void func(int a){
    cout<<"I am first func()"<<a<<endl;

}
template <class T>
void func(T a){
    cout<<"I am templatized func() "<<a<<endl;

}

int main()
{
    // Priyanka<int> p(4);
    // cout<<p.data;
    // p.display();


    func(4);  //exact match takes highest priority
    // func1(4);

    return 0;
}
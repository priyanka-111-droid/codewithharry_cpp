//class templates with multiple parameters
/*
//2 array ban rahe hai-float and int
template<class T1,class T2....(comma separated)>
class Nameofclass{
    //body
};
*/
#include<iostream>
using namespace std;

template<class T1,class T2>
//this line means kuch datatype hain jo main obj banate vakt spcify kar dunga

class myClass{
    public:
    T1 data1;
    T2 data2;
    myClass(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    void display(){
        cout<<this->data1<<endl;
        cout<<this->data2;

    }
};

int main()
{
    myClass<char,float>obj('a',1.44);
    obj.display();

    return 0;
}
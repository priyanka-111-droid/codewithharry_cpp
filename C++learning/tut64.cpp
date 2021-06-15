//writing first c++ template
#include<iostream>
using namespace std;

template <class T>
class vector{
    public:
    T *arr;
    int size;
   
        vector(int m){
            size=m;
            arr=new T[size];
        }
        T dotProduct(vector &v){
            T d=0;
            for (int i = 0; i < size; i++)
            {
                d+=this->arr[i]*v.arr[i];
               
            }
             return d;
        }
};
int main()
{
    // vector v1(3);
    // v1.arr[0]=4;
    // v1.arr[1]=3;
    // v1.arr[2]=2;

    // vector v2(3);
    // v2.arr[0]=5;
    // v2.arr[1]=6;
    // v2.arr[2]=7;
    // int a=v1.dotProduct(v2);
    // cout<<a<<endl;

    //when I make object of class,I will specify
    vector <float>v1(3);
    v1.arr[0]=4.1;
    v1.arr[1]=3.2;
    v1.arr[2]=2.1;

    vector <float>v2(3);
    v2.arr[0]=5.1;
    v2.arr[1]=6.2;
    v2.arr[2]=7.2;
    float a=v1.dotProduct(v2);
    cout<<a<<endl;

    return 0;
}
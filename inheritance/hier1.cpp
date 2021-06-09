/*C++ program to demonstrate 
example of hierarchical inheritance 
to get square and cube of a number.*/
#include<iostream>
using namespace std;

class Number
{
    private:
        int num;
    public:
        void getNumber(void)
        {
            cout << "Enter an integer number: ";
            cin  >> num;
        }
        //to return num
        int returnNumber(void)
        { return num; }
};
 
//Base Class 1, to calculate square of a number
class Square:public Number
{
    int num,sqr;
    public:
    int getSquare(void)
    {
        num=returnNumber(); //get number from class Number
        sqr=num*num;
        return sqr;
    }
};

//Base Class 2, to calculate cube of a number
class Cube:public Number
{
    private:
           int num,cube;
    public:
    int getCube(void)
    {
       
        num=returnNumber(); //get number from class Number
        cube=num*num*num;
        return cube;
    }
};

int main()
{
    Square s;
    s.getNumber();
    cout<<s.getSquare()<<endl;

    Cube c;
    c.getNumber();
    cout<<c.getCube();

    return 0;
}
//Overloading unary op
/*Let us consider to overload (-) unary operator.
 In unary operator function, no arguments
should be passed.
It works only with one class objects. 
It is a overloading of an operator operating on a single operand.*/
#include<iostream>
using namespace std;
class Distance{
    int feet,inch;
    public:
    Distance(int f,int i){
        this->feet=f;
        this->inch=i;
    }
    //overloading op(-) to perform decrement
    //opn of Distance obj
    void operator-()
    {
        feet--;
        inch--;
        cout<<feet<<" "<<inch;
    }
};
int main()
{
    Distance d1(8,9);
    //use (-)unary op by single command
    -d1;
    return 0;
}
/*it shows that no argument is 
passed and no return_type value is returned, because 
unary operator works on a single operand. (-) operator
 change the functionality to its member function.*/
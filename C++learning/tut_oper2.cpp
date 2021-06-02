//overloading binary operator
//1 arg passed
//overloading of operator operating on 
//2 operands

#include<iostream>
using namespace std;
class Distance{
    public:
    int feet,inch;
    
    Distance(){//def cons
        this->feet=0;
        this->inch=0;
    }
    Distance(int f,int i){
        this->feet=i;
        this->inch=i;
    }
    //overloading (+)op to do addition
    //of 2 Distance obj
    Distance operator+(Distance& d2)//call by ref
    {
        // Create an object to return
        Distance d3;
 
        // Perform addition of feet and inches
        d3.feet = this->feet + d2.feet;
        d3.inch = this->inch + d2.inch;
 
        // Return the resulting object
        return d3;
    }
};
int main()
{
    // Declaring and Initializing first object
    Distance d1(8, 9);
 
    // Declaring and Initializing second object
    Distance d2(10, 2);
 
    // Declaring third object
    Distance d3;
 
    // Use overloaded operator
    d3 = d1 + d2;
 
    // Display the result
    cout << "\nTotal Feet & Inches: " <<d3.feet<< "'" << d3.inch;

    return 0;
}
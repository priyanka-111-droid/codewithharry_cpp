//OOPs recap and nesting of member functions

#include <iostream>
#include <string>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_c(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter binary" << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_c(void)
{
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else if(s.at(i) == '1')
            s.at(i) = '0';
    }
}
void binary ::display(void)
{
    int i;
    cout<<"display"<<endl;
    for (i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout<<endl;
}
//driver program
int main()
{

    //OOPs - classes and objects
    // C++ -->called C with class
    //class -->extensions of structures(in C)
    //struct has limitations
    //      -->members public
    //      -->no methods
    //classes-->structures + more
    //classes can have methods and properties
    //classes can make few members private and few public
    //structures in c++ typedef
    //you can declare objects along with class declaration like
    /* class Employee{

        //class def
    }harry,rohan,lovish;*/
    //harry.salary=8 makes no sense if salary is private

    //Nesting of member functions
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.ones_c();
    b.display();
    return 0;
}

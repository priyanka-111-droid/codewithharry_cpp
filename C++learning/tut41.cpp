#include <iostream>
using namespace std;
/*
Syntax for inheriting in multiple inheritance-
class Derivedc:visibility mode base1,visibility-mode base2
{
    Class body of class "Derivedc"
};
*/
class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class Derived: public Base1,public Base2{
    public:
        void show(){
            cout<<"value of base 1 is:"<<base1int<<endl;
            cout<<"value of base 2 is:"<<base2int<<endl;
            cout<<"sum is:"<<base1int+base2int<<endl;
        }
};
/*
the inherited derived class looks like this:
data members:
    base1int -->protected
    base2int-->protected

member functions:
    set_base1int -->public
    set_base2int-->public
    show-->public

*/
int main()
{
    Derived harry;
    harry.set_base1int(2);
    harry.set_base2int(3);
    harry.show();
    return 0;
}
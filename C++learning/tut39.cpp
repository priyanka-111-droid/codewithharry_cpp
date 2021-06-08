#include<iostream>
using namespace std;

class Base{
    //private variable,BUT inherit ho sakta hai
    protected:
        int a;
    private:
        int b;


};
/*
for a protected member:
                        Public derivation Private Der    Protected Der
    1.Private members       Not inh          No inh         not inh  
    2.Protected members     protected        private        protected
    3.Public members        public           private        protected
*/
class Derived: protected Base{

};
int main()
{
    Base b;
    Derived d;
    // cout<<d.a;
    // cout<<b.a;
    //error for above both,how u accessing protected?
    return 0;
}
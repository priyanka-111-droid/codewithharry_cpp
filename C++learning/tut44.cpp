/*
Virtual Base class:
class A-int a
A has 2 kids-B(int a) and C (int a)
B(int a) and C(int a) ki madad se D banate  hain
D bolega kidhar se (a) lu?

To solve this,when A gives 'a' to its kids 
it says,I am giveing you 'a' but when you are giving this 'a'
to someone check if there is another instance of 'a'
So,B aur C ko virtual base class banayenge

A:virtual base class
we have derived B and C with A as virtual base class
class B:virtual public A{
    ---
};
class C:virtual A{
    ---
};
if I inherit from A,uske neeche saare classes ek hi baar A ke data members inherit karange
so no duplication and no ambiguity
*/


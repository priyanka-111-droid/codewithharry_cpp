/*
---------------------------------------
Constructors in derived class:
1.We can use constructors in derived classes in C++
2.If base class constructor does not have arguments,no need of
contructor in derived class(by default A ka pass hojayega B mein)
3.But if there are 1 or more arguments in base class constructor ,derived class needs
to pass arguments to base class constructors.
4.If both base and derived classes have constructors,base class constructor
is executed first.
5.In multiple inheritance,base classes are constructed
in order they appear in class declaration
6.In multilevel inheritance constructors are constructed in order of 
inheritance
--------------------------------------
Special syntax:
1.special syntax for passing arguments to multiple
base classes
2.constructor of derived class receives all arguments
at once and then passes calls to respective base classes.
3.body called after all constructors finished executing

Derived-constructor(arg 1,arg 2,arg 3...):Base1-Constructor(arg1,arg2),Base2-Constructor(arg3,arg4){
....
}Base 1-Constructor(arg1,arg2)
-----------------------------------------
Special case of virtual base class:
1. Constructors for virtual base class are invoked
before non virtual base class
2.If multiple virtual base classes,they are invoked
in order they are declared.
3.Any non-virtual base class is constructed before
derived class constructor is executed.

*/
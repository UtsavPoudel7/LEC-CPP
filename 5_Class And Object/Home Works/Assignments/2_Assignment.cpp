// Assignment

// define class , object , method , attribute
// difference between memeber funciton and non memeber function
// define constructor
// differencebetween default constructor and priamaterized constructor

// class,object,method,attribute,member function , non member function,default constructorand parametrized constructor

#include <iostream>
using namespace std;

// Class definition
class MyClass
{
private:
    int attribute;

public:
    // Default constructor
    MyClass()
    {
        attribute = 0;
    }

    // Parameterized constructor
    MyClass(int value)
    {
        attribute = value;
    }

    // Getter method for attribute
    int getAttribute()
    {
        return attribute;
    }

    // Member function
    void memberFunction()
    {
        cout << "This is a member function." << endl;
    }
};

// Non-member function
void nonMemberFunction()
{
    cout << "This is a non-member function." << endl;
}

int main()
{
    // Create an object using default constructor
    MyClass obj1;

    // Create an object using parameterized constructor
    MyClass obj2(5);

    // Accessing attributes using getter method and calling member functions
    cout << "Attribute of obj1: " << obj1.getAttribute() << endl;
    obj1.memberFunction();

    cout << "Attribute of obj2: " << obj2.getAttribute() << endl;
    obj2.memberFunction();

    // Calling non-member function
    nonMemberFunction();

    return 0;
}








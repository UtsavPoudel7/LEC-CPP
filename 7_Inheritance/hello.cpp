#include <iostream>
using namespace std;
 
class Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Base Function" << endl;
    }
};
 
class Child : public Parent {
public:
    void GeeksforGeeks()
    {
        cout << "Derived Function" << endl;
    }
};
 
int main()
{
    Child Child_Derived;
 
    // pointer of Parent type that points to derived1
    Parent *ptr = &Child_Derived;
    // Child *ptr = &Child_Derived;
 
    // call function of Base class using ptr
    ptr->GeeksforGeeks();
    // ptr->GeeksforGeeks();
 
    return 0;
}
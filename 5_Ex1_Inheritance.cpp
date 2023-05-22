#include <iostream>
using namespace std;

class Account
{
public:
    float salary = 6000;

    Account()      //Constructor are those method that have similar name to that of class and with no return type.should not be encoked explicitily
    {
        cout<<"This is account";
    }

    // void display()
    // {
    //     cout << "This is display" << endl;
    // }
}; // Base class

// class Programmer : public Account
// {
// public:
//     float bonus = 5000;

//     void dis()
//     {
//         cout << "Hellow world" << endl;
//     }

// }; // Derived class

int main(void)
{
    // Programmer p1;
    Account a1;

    // a1.Account();

    // a1.display();
    // p1.dis();
    // p1.display();
    // a1.dis();                        /*******Hudaina Hudaina

    // cout << "Salary:" << p1.salary << endl;
    // cout << "Salary:" << a1.salary << endl;
    // cout << "Salary:" << p1.bonus << endl;

    // cout<<a1.bonus<<endl;
    /********************* THIS WILL THROW AN ERROR BECAUSE THE BASE CLASS CANNOT ACCESS THE DERIVED CLASS (i.E) BASE CAANOT ACCESS THE CLASS OF AN DERIVED TYPE ****************/

    return 0;
}

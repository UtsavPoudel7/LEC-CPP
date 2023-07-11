#include <iostream>
using namespace std;

class A
{
protected:
    int x;

public:
    void input()
    {
        cout << "\nEnter Number:";
        cin >> x;
    }
};

class B : public A
{
    int y;

public:
    void getdata()
    {
        cout << "\nEnter no :";
        cin >> y;
    }
    void putdata()
    {
        cout << "\nAddition :" << x + y;
    }
};

int main()
{
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();

    return 0;
}


//How to do if using private access specifier

// #include <iostream>
// using namespace std;

// class A
// {

//     int x;

// public:
//     void input()
//     {
//         cout << "\nEnter Number:";
//         cin >> x;
//     }

//     int getx()
//     {
//         return x;
//     }
// };

// class B : public A
// {
//     int y;

// public:
//     void getdata()
//     {
//         cout << "\nEnter no :";
//         cin >> y;
//     }
//     void putdata()
//     {
//         cout << "\nAddition :" << getx() + y;
//     }
// };

// int main()
// {
//     B aa;
//     aa.input();
//     aa.getdata();
//     aa.putdata();

//     return 0;
// }
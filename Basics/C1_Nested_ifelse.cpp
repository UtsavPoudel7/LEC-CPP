#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "Enter your age :";
    cin >> age;

    if (age > 14)
    {
        if (age >= 18)
        {
            cout << "Adult";
        }
        else
        {
            cout << "Teenager";
        }
    }
    else
    {
        cout<<"You are child";
    }

    return 0;
}


#include <iostream>
using namespace std;
#include <string>

class My_Friends
{
public:
    string name;
    int phone_number;
    string address;

    My_Friends() // Constructor
    {
        cout << "Enter name:";
        cin >> name;
        cout << "Enter Phone number :";
        cin >> phone_number;
        cout << "Enter the address :";
        cin >> address;
    }
    void show_data()
    {
        cout << name << endl;
        cout << phone_number << endl;
        cout << address << endl;
    }
};

int main()
{
    My_Friends Roshan_Timisina;
    Roshan_Timisina.show_data();
    My_Friends Roshan_Thapa;
    Roshan_Thapa.show_data();

    return 0;
}
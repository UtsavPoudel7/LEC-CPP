#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[20];
    char phone[10];

public:
    void gatedata()
    {
        cout << "\nEnter Roll NO :";
        cin >> roll;
        cout << "Enter Name :";
        cin >> name;
        cout << "Enter Phone Number :";
        cin >> phone;
    }

    void showdata()
    {
        cout << "Name :" << name << endl;
        cout << "Roll no :" << roll << endl;
        cout << "Phone Number :" << phone << endl;
    }
};

int main()
{
    student s1, s2;
    s1.gatedata();
    s2.gatedata();
    cout << "first student" << endl;
    s1.showdata();
    cout << "second studnet" << endl;
    s2.showdata();
    return 0;
}
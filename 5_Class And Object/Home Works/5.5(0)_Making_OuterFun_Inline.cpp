// Making outer function inline

#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[20];
    char phone[10];

public:
    void getdata();
    void showdata();
};

inline void student::getdata()
{
    cout << "\nEnter Roll NO :";
    cin >> roll;
    cout << "\nEnter Name :";
    cin >> name;
    cout << "\nEnter Phone Number";
    cin >> phone;
}

inline void student::showdata()
{
    cout << "Name: " << name << endl;
    cout << "Roll NO: " << roll << endl;
    cout << "Phone Number: " << phone << endl;
}

int main()
{
    student s1, s2;
    s1.getdata();
    s2.getdata();
    cout << "First student<" << endl;
    s1.showdata();
    cout << "Second student" << endl;
    s2.showdata();

    return 0;
}
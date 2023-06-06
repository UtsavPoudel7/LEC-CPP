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

void student::getdata()
{
    cout << "\nEnter Roll NO :";
    cin >> roll;
    cout << "Enter Name :";
    cin >> name;
    cout << "Enter Phone Number :";
    cin >> phone;
}

void student::showdata()
{
    cout << "\nEnter Roll NO :";
    cout << "Enter Name :";
    cout << "Enter Phone Number :";
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
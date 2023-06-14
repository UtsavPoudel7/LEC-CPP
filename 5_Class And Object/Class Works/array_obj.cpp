// Object Array

#include <iostream>
using namespace std;

class student
{
    string name;
    int rollno;

public:
    void getdata()
    {

        cin >> name;
        cin >> rollno;
    }

    void showdata()
    {
        cout << name << endl;
        cout << rollno << endl;
    }
};

int main()
{
    student s1[36];

    for (int i = 0; i < 5; i++)
    {
        s1[i].getdata();
    }
    for (int i = 0; i < 5; i++)
    {
        s1[i].showdata();
    }

    return 0;
}

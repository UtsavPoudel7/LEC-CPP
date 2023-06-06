#include <iostream>
using namespace std;

class student
{
public:
    double marks;

    student()
    {
        cout << "Enter the marks :";
        cin >> marks;
    }
};

void calc_average(student s1, student s2)
{
    double average;
    average = (s1.marks + s2.marks);
    cout << "The average is :" << average;
};

int main()
{
    student s1, s2;
    calc_average(s1, s2);
    return 0;
}

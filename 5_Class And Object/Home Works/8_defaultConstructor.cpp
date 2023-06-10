// #include <iostream>
// using namespace std;

// class Person
// {
// private:
//     string name;
//     int age;

// public:
//     // Default constructor
//     Person()
//     {
//         name = "Rajesh Hamal";
//         age = 50;
//         }

//     // Method

//     void display()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main()
// {
//     Person person;

//     // Calling the display method to print the default values
//     person.display();

//     return 0;
// }

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle()
    {
        length = 10;
        breadth = 5;
    }

    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle r1;
    cout << "The area is :" << r1.calculateArea() << endl;
}
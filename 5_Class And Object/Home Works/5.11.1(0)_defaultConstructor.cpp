#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Default constructor
    Person()
    {
        name = "Rajesh Hamal";
        age = 50;
        }

    // Method

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    Person person;

    // Calling the display method to print the default values
    person.display();

    return 0;
}

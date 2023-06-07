#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    // Parameterized constructor
    Person(const string &newName, int newAge)
    {
        name = newName;
        age = newAge;
    }

    // Copy constructor
    Person(const Person &other)
    {
        name = other.name;
        age = other.age;
    }

    void printDetails()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    void setName(const string &newName)
    {
        name = newName;
    }

    void setAge(int newAge)
    {
        age = newAge;
    }
};

int main()
{
    // Create person1 using the parameterized constructor
    Person person1("John", 25);

    // Create person2 using the copy constructor
    Person person2(person1);

    // Modify person1's attributes
    person1.setName("Jane");
    person1.setAge(30);

    // Print details of both person1 and person2
    cout << "Details of person1:" << endl;
    person1.printDetails();

    cout << "\nDetails of person2 (copy of person1):" << endl;
    person2.printDetails();

    return 0;
}

#include <iostream>
using namespace std;

class Today
{
private:
    int x, y;

public:
    Today(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "Value of x is " << x;
        cout << "Value of y is " << y;
    }

    Today(Today &p)
    {
        x = p.x;
        y = p.y;
    }
};

int main()
{
    Today obj(7, 77);
    Today obj1(obj);
    obj.display();
    obj1.display();
}

#include <iostream>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    Person(string x, int y)
    {
        name = x;
        age = y;
    }

    void display()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    Person(Person &P)
    {
        name = P.name;
        age = P.age;
    }
};

int main()
{
    Person obj("Utsav", 19);
    Person obj1(obj);
    obj.display();
    obj1.display();
}

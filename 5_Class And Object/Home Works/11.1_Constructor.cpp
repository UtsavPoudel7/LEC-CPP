#include <iostream>
using namespace std;
#include <string>

class Employee
{
private:
    string Employee_name;
    string employee_ID;
    int salary;

public:
    Employee(string name, string ID, int sal)
    {
        Employee_name = name;
        employee_ID = ID;
        salary = sal;
    }
    Employee(string name, string ID)
    {
        Employee_name = name;
        employee_ID = ID;
        salary = 0;
    }

    void display()
    {
        cout << "Employee Details" << endl;
        cout << "Name: " << Employee_name << endl;
        cout << "ID: " << employee_ID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1("John Doe", "E001", 5000);
    Employee e2("Jane Smith", "E002");

    e1.display();
    cout << endl;
    e2.display();

    return 0;
}
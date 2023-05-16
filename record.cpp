#include <iostream>
#include <string>  

class Student  
{
    
private:
    int Rollno;
    std::string Name;  
    int age;
    int assignment_marks;

public:
    void showAge()  
    {
        std::cout << "The age is: " << age << std::endl;  
    }
};

int main()
{
    Student std1;  

    std1.Rollno = 5;  
    std1.Name = "Hari"; 
    std1.age = 55;

    std1.showAge();  

    return 0;
}

#include <iostream>
#include <string>  
using namespace std;
class Student  
{
    
private:
    int Rollno;
    string Name;  
    int age;
    int assignment_marks;

public:
   void ask(void)
   {
    cout<<"Enter name : "<<endl;
    cin>>Name;
    cout<<"Enter Rollno : "<<endl;
    cin>>Rollno;
    cout<<"Enter age : "<<endl;
    cin>>age;
    cout<<"Enter assignment_marks : "<<endl;
    cin>>assignment_marks;

   }
    void show(void)  
    {
        cout << "The age is: " << age << endl;  
        cout << "The Rollno is: " << Rollno << endl;  
        cout << "The Name is: " << Name << endl;  
        cout << "The assignment_marks is: " << assignment_marks << endl;  
    }
};

int main()
{
    Student std1;  
    std1.ask();
    

    std1.show();  

    return 0;
}

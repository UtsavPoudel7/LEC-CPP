#include <iostream>
using namespace std;
namespace BEC
{
    char subject[20] = "Applied";
    int room = 303;
    int students = 34;
    char college[10] = "LEC";

    void printNoOfStudents()
    {
        cout << "No of students of BEC: " << students << endl;
    }
    void printSubject()
    {
        cout << "BEC subject : " << subject << endl;
    }
    void printRoom()
    {
        cout << "BEC room : " << room << endl;
    }
    void printCollege()
    {
        cout << "BEC College : " << college << endl;
    }
}

namespace BCT
{
    char subject[100] = "Object Orientation Programming";
    int room = 400;
    int students = 36;
    char college[10] = "LEC";

    void printNoOfStudents()
    {
        cout << "No of students of BCT: " << students << endl;
    }
    void printSubject()
    {
        cout << "BCT subject : " << subject << endl;
    }
    void printRoom()
    {
        cout << "BCT room : " << room << endl;
    }
    void printCollege()
    {
        cout << "BCT College : " << college << endl;
    }
}

int main()
{
    using namespace BEC;
    using namespace BCT;


    BEC::printNoOfStudents();
    BCT::printNoOfStudents();

    BEC::printSubject();
    BCT::printSubject();

    BEC::printRoom();
    BCT::printRoom();
    
    return 0;
}

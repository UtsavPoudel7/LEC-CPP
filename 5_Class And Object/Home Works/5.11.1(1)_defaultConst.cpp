
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
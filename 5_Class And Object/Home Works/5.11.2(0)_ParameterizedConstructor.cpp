#include <iostream>
using namespace std;

class Rectangle
{
private:
    int width;
    int height;

public:
    Rectangle(int x, int y)
    {
        width = x;
        height = y;
    }

    int calculateArea()
    {
        return width * height;
    }
};

int main()
{
    Rectangle r1(3, 5);
    cout << "The area of the rectangle is :" << r1.calculateArea() << endl;
}

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    Rectangle()
    {
        length = width = 0;
    }

    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }
    Rectangle(int x)
    {
        length = x;
        width = x;
    }
    int getArea()
    {
        return length * width;
    }
};

int main()
{
    Rectangle r1;
    Rectangle r2(5, 10);
    Rectangle r3(5);

    cout << "Area of the first rectangle: " << r1.getArea() << endl;
    cout << "Area of the second rectangle: " << r2.getArea() << endl;
    cout << "Area of the third rectangle: " << r3.getArea() << endl;

    return 0;
}

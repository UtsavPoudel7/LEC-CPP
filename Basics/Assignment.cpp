/*
//Here I have made use of
1.Class
2.Object
3.Methods
4.Attributes
5.Member Function
6.Non-Member Function
7.Default Constructor
8.Parameterized Constructor
*/

#include <iostream>
using namespace std;

// Class defination
class Rectangle
{
private: // Access Specifier
    // Attributes:
    int length;
    int width;

public: // Access Specifier
    // Default Constructor
    Rectangle()
    {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    // Member function
    int calculateArea()
    {
        return length * width;
    }

    // Member function
    int calcualtePerimeter()
    {
        return 2 * (length + width);
    }
};

// Non-Member Function
void compareRectangles(Rectangle r1, Rectangle r2)
{
    int area1 = r1.calculateArea();
    int area2 = r2.calculateArea();

    if (area1 > area2)
    {
        cout << "Rectangle 1 has a larger area." << endl;
    }
    else if (area2 > area1)
    {
        cout << "Rectangle 2 has a larger area." << endl;
    }
    else
    {
        cout << "Both rectangles have the same area." << endl;
    }
}

int main()
{
    // Object:
    Rectangle r1(4, 2);
    Rectangle r2(3, 5);

    int area1 = r1.calculateArea();
    int perimeter1 = r1.calcualtePerimeter();

    int area2 = r2.calculateArea();
    int perimeter2 = r2.calcualtePerimeter();

    cout << "Area 1 :" << r1.calculateArea() << "\nPerimeter 1 :" << r1.calcualtePerimeter() << endl;
    cout << "Area 2 :" << r2.calculateArea() << "\nPerimeter 2 :" << r2.calcualtePerimeter() << endl;

    compareRectangles(r1, r2);
}

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length, width;

public:
    void getvalue()
    {
        cout << "Enter length and width :";

        cin >> length;
        cin >> width;
    }

    void calculateArea()
    {
        int c = length * width;
        cout << "The area of the rectangle is :" << c << endl;
    }
    void perimeter()
    {
        int d = 2 * (length * width);
        cout << "The perimeter of the rectangle is :" << d << endl;
    }
};

int main()
{
    Rectangle r1[50];
    for (int i = 0; i < 5; i++)
    {
        r1[i].getvalue();
        r1[i].calculateArea();
        r1[i].perimeter();
    }
    return 0;
}

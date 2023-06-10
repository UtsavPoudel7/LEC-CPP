#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    // Default constructor
    Complex()
    {
        real = 0;
        imag = 0;
    }

    // Parameterized constructor
    Complex(float re, float im)
    {
        real = re;
        imag = im;
    }

    void getValue()
    {
        cout << "\nEnter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    void showValue()
    {
        cout << "(" << real << "," << imag << ")";
    }

    Complex add(Complex cc2)
    {
        Complex result;
        result.real = real + cc2.real;
        result.imag = imag + cc2.imag;
        return result;
    }
};

int main()
{
    Complex c1, c2(4.2, 5.3), c3;
    c1.getValue();
    c3 = c1.add(c2);
    c1.showValue();
    cout << " + ";
    c2.showValue();
    cout << " = ";
    c3.showValue();

    return 0;
}

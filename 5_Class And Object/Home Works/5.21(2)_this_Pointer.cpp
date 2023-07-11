#include <iostream>
using namespace std;

class MyClass
{
private:
    int value;

public:
    MyClass(int value)
    {
        this->value = value;
    }

    void printValue()
    {
        cout << "Value: " << this->value << endl;
    }

    void printAddress()
    {
        cout << "Address: " << this << endl;
    }
};

int main()
{
    MyClass obj(42);
    obj.printValue();
    obj.printAddress();

    return 0;
}

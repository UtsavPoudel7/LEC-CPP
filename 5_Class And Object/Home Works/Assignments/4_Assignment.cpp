
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string Model;
    int Year;
    string Color;

public:
    Car()
    {
        Model = "Unkown";
        Year = 0;
        Color = "Unknown";
    }
    string start_engine()
    {
        cout << "Engine Started" << endl;
    }

    void drive(int distance)
    {
        cout << "Drivng" << distance << "miles" << endl;
    }

    void get_details()
    {
        cout << "Car Model :" << Model << endl;
        cout << "Year :" << Year << endl;
        cout << "Color :" << Color << endl;
    }
    void set_model(string model)
    {
        Model = model;
    }

    void set_year(int year)
    {
        Year = year;
    }

    void set_color(string color)
    {
        Color = color;
    }
};

int main()
{
    Car myCar;
    myCar.set_model("Tesla");
    myCar.set_year(2022);
    myCar.set_color("Red");

    myCar.start_engine();
    myCar.drive(50);
    myCar.get_details();
    return 0;
}

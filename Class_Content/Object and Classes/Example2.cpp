// iteminfo

#include <iostream>
using namespace std;

class iteaminfo
{
private:
    int itemid;
    float cost;

public:
    void setdate(int it, float cst)
    {
        itemid = it;
        cost = cst;
    }
    void showdata()
    {
        cout << "\n Iteam ID :" << itemid << endl;
        cout << "\n Cost :" << cost << endl;
    }
};

int main()
{
    iteaminfo i1, i2;
    i1.setdate(55, 35.50);
    i2.setdate(555, 135.25);

    cout << "\nInformation on first Iteam";
    i1.showdata();

    cout << "\nInformation on second Iteam";
    i2.showdata();
    return 0;
}
#include <iostream>
using namespace std;

class sathiharu
{
public:
    string naam;
    string addresss;
    int age;

    sathiharu(string name, string address, int number)
    {
        cout << "Constructor call vayo ta"<< name<< endl;
        // string naam;
        // string thau;
        // int umer;
    }

    void ghumeprogram()
    {
        // cout << "Oi Espali ghumna jaam bujhis " << name << " umm "
        //      << age << "ko umer ma hike garna sakinchha masta. ka jane hola ta "
        //      << addresss << " jada thik hola?";
    }
};

int main()
{
    sathiharu firstfriend("Utsav", "Brt", 100);
    //  secondfriend;
    // firstfriend.naam(Utsav);
    // firstfriend.age = 22;
    // firstfriend.addresss = "vishnudwar";
    // firstfriend.ghumeprogram();

    // secondfriend.name = "Roshan";
    // secondfriend.age = 20;
    // secondfriend.addresss = "vishnudwar";
    // secondfriend.ghumeprogram();
}
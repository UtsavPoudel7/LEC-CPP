#include <iostream>
using namespace std;

class Book
{
private:
    string title;
    string author;
    int year;

public:
    void setDetails(const string &t, const string &a, int y)
    {
        title = t;
        author = a;
        year = y;
    }

    void displayDetails()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
        cout << endl;
    }
};

int main()
{
    const int SIZE = 3; // Number of books in the array
    Book books[SIZE];

    // Get the details of each book from the user
    for (int i = 0; i < SIZE; i++)
    {
        string title, author;
        int year;
        cout << "Enter the details of Book " << i + 1 << ":" << endl;
        cout << "Title: ";
        getline(cin >> ws, title);
        cout << "Author: ";
        getline(cin >> ws, author);
        cout << "Year: ";
        cin >> year;

        books[i].setDetails(title, author, year);
    }

    // Display the details of all the books
    cout << "Book Details:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Book " << i + 1 << ":" << endl;
        books[i].displayDetails();
    }

    return 0;
}

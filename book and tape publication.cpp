#include<iostream>
#include<string.h>
using namespace std;

// Base class 'publication'
class publication
{
    public:
    float price;
    string title;

    // Function to get title and price of the publication
    void get()
    {
        cout << "Enter the title and price of the publication respectively:" << endl;
        cin >> title >> price;
    }

    // Function to display title and price of the publication
    void disp()
    {
        cout << "Title is: " << title << endl;
        cout << "Price is: " << price << endl;
    }
};

// Derived class 'book' inherits from 'publication'
class book: public publication
{
    public:
    int page_count;

    // Function to get page count of the book
    void getpage()
    {
        cout << "Enter the page count: ";
        cin >> page_count;

        // Handling exception: page count should be greater than zero
        try
        {
            if(page_count <= 0)
            {
                throw 1;
            }
        }
        catch(int a)
        {
            // Resetting data members to default values
            title = " ";
            page_count = 0;
            price = 0;
            cout << "Page count should be greater than zero" << endl;
        }
    }

    // Function to display page count of the book
    void disppage()
    {
        cout << "Page count is: " << page_count << endl;
    }
};

// Derived class 'tape' inherits from 'publication'
class tape: public publication
{
    public:
    float playing_time;
    string name_cassette;

    // Function to get cassette name and playing time
    void gettime()
    {
        cout << "Enter the name of the cassette: ";
        cin >> name_cassette;
        cout << "Enter the cassette playing time in minutes: ";
        cin >> playing_time;

        // Handling exception: playing time should be greater than zero
        try
        {
            if(playing_time < 0)
            {
                throw 1;
            }
        }
        catch(int a)
        {
            // Resetting data member to default value
            playing_time = 0;
            cout << "Playing time should be greater than zero" << endl;
        }
    }

    // Function to display cassette name and playing time
    void disptime()
    {
        cout << "Name of cassette is: " << name_cassette << endl;
        cout << "Play time in minutes is: " << playing_time << endl;
    }
};

// Main function
int main()
{
    // Creating objects of 'book' and 'tape' classes
    book obj1;
    tape obj2;

    // Getting input for book and tape objects
    obj2.get();         // Get title and price of tape
    obj1.getpage();     // Get page count of book
    obj2.gettime();     // Get cassette name and playing time of tape

    // Displaying information of book and tape objects
    obj2.disp();        // Display title and price of tape
    obj1.disppage();    // Display page count of book
    obj2.disptime();    // Display cassette name and playing time of tape

    return 0;
}

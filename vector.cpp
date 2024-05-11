#include<iostream>
#include<vector>
#include<algorithm> // Include the algorithm header for using the find and sort functions
using namespace std;

// Define a class named Person
class Person {
public:
    int id;
    char name[10];

    // Member function to get data from the user
    void getdata() {
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;
    }

    // Member function to display the data
    void show() {
        cout << "\nID: " << id;
        cout << "\nName: " << name;
    }

    // Overloaded equality operator to compare Person objects based on their ID
    bool operator ==(Person p1) {
        return (id == p1.id);
    }
};

// Function to compare two Person objects based on their ID
bool check1(Person &p1, Person &p2) {
    return (p1.id < p2.id);
}

int main() {
    vector<Person> v; // Create a vector to store Person objects
    int n;
    Person p;
    vector<Person>::iterator itr;

    // Start an infinite loop for the menu-driven program
    while (1) {
        cout << "\n ------------------------------------------------------------------ ";
        cout << "\n\n1. Add Record \n2. Show \n3. Search\n4. Delete\n5. Sort\n6. Exit\n";
        int ch;
        cout << "\nEnter Your Choice: ";
        cin >> ch;
        switch (ch) {
            case 1:
                p.getdata();
                v.push_back(p); // Add the Person object to the vector
                cout << "\n ------------------------------------------------------------------ ";
                cout << "\n\t\t\tDATA ADDED SUCCESSFULLY ";
                break;
            case 2:
                // Iterate through the vector and call the show() function for each Person object
                for (itr = v.begin(); itr != v.end(); itr++) {
                    itr->show();
                }
                break;
            case 3:
                cout << "\nEnter ID to search: ";
                cin >> p.id;
                itr = find(v.begin(), v.end(), p); // Search for the Person object in the vector
                if (itr != v.end()) {
                    cout << "\nRecord Found ";
                    itr->show(); // Display the found Person object
                } else {
                    cout << "\nRecord Not Found ";
                }
                break;
            case 4:
                cout << "\nEnter ID to Delete: ";
                cin >> p.id;
                itr = find(v.begin(), v.end(), p); // Search for the Person object in the vector
                if (itr != v.end()) {
                    cout << "\nRecord Found ";
                    itr->show(); // Display the found Person object
                    cout << "\n\nData Deleted ";
                    v.erase(itr); // Delete the found Person object from the vector
                } else {
                    cout << "\nRecord Not Found ";
                }
                break;
            case 5:
                sort(v.begin(), v.end(), check1); // Sort the vector of Person objects based on their ID
                cout << "Sort Successful ";
                break;
            case 6:
                cout << "\n\t\t\tTHANK YOU ";
                exit(0); // Exit the program
            default:
                cout << "\n ------------------------------------------------------------------ ";
                cout << "\n\t\t\tINVALID CHOICE ";
        }
    }
    return (0);
}

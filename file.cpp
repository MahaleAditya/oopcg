#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare variables
    int n;            // for roll number
    string line;      // for name
    float p;          // for percentage

    // Create an output file stream and open a file named "a.txt"
    ofstream fout("a.txt");

    // Prompt user to input roll number and write it to the file
    cout << "Enter your roll number: ";
    cin >> n;
    fout << n;

    // Prompt user to input name and write it to the file
    cout << "Enter your name: ";
    cin >> line;
    fout << line;

    // Prompt user to input percentage and write it to the file
    cout << "Enter your percentage: ";
    cin >> p;
    fout << p;

    // Close the output file stream
    fout.close();

    // Create an input file stream and open the file "a.txt" for reading
    ifstream fin("a.txt");

    // Read roll number from the file and display it
    fin >> n;
    cout << "\n1) The roll number is " << n;

    // Read name from the file and display it
    fin >> line;
    cout << "\n2) The name is " << line;

    // Read percentage from the file and display it
    fin >> p;
    cout << "\n3) The percentage is " << p;

    // Close the input file stream
    fin.close();

    return 0;
}

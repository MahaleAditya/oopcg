#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
    int n, i, pop;
    string state;
    string find;

    // Define a map to store state names and their populations
    map<string, int> mymap;

    // Prompt the user to enter the total number of states to be entered
    cout << "Enter the total number of states to be entered: ";
    cin >> n;

    // Loop to input state names and populations
    for (i = 0; i < n; i++) {
        // Prompt the user to enter the name of the state
        cout << "Enter name of state: ";
        cin >> state;

        // Prompt the user to enter the population of the state
        cout << "Enter the population: ";
        cin >> pop;

        // Insert the state name and population into the map
        mymap.insert(pair<string, int>(state, pop)); 
    }

    // Prompt the user to enter the name of the state to search for its population
    cout << "Enter name of state to search: ";
    cin >> find;

    // Check if the entered state name is found in the map
    if (find == state) { // This comparison is incorrect, it should be mymap.find(find) != mymap.end()
        // If found, print the population of the state
        cout << "Population of " << state << " is : " << mymap[state];
    } else {
        // If not found, print "State not Found"
        cout << "State not Found";
    }
    return 0;
}

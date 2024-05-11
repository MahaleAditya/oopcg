#include<iostream>
using namespace std;

// Function template for selection sort
template <class T1>
void selectionsort(T1 a[10], int s) {
    int i, j, min;
    T1 temp;
    
    // Loop through the array
    for (i = 0; i < s - 1; i++) {
        min = i;
        // Find the index of the minimum element in the unsorted part of the array
        for (j = i + 1; j < s; j++) {
            if (a[min] > a[j]) min = j;
        }
        // Swap the minimum element with the first element of the unsorted part
        temp = a[i];
        a[i] = a[min];
        a[min] = temp; 
    }
    
    // Display the sorted array
    cout << "\nSorted array by selection sort:\n";
    for (i = 0; i < s; i++) {
        cout << " " << a[i];
    }
}

int main() {
    int x[10], n, ch;
    
    // Input size of the integer array
    cout << "Enter the size of the integer array: ";
    cin >> n;
    
    // Input elements of the integer array
    cout << "Enter " << n << " integer elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    
    float y[10], m;
    
    // Input size of the float array
    cout << "Enter the size of the float array: ";
    cin >> m;
    
    // Input elements of the float array
    cout << "Enter " << m << " float elements:\n";
    for (int i = 0; i < m; i++) {
        cin >> y[i];
    }

    // Menu-driven approach to choose sorting algorithm
    cout << "Enter your choice:\n1. Selection sort\n";
    cin >> ch;
    switch (ch) {
        case 1:
            // Call selection sort for integer array
            selectionsort(x, n);
            // Call selection sort for float array
            selectionsort(y, m);
            break;
    }

    return 0;
}

#include <iostream>

using namespace std;

// Function prototype
void FunctionName();

int main() {
    // Call the function
    FunctionName();
    return 0;
}

// Function definition
void FunctionName() {
    int array[5] = {12, 13, 14, 15, 20};  // Initializing the array
    array[0] = 0;  // Changing the values in the array
    array[1] = 1;
    array[2] = 2;
    array[3] = 3;
    array[4] = 4;

    // This loop overwrites the array with i values
    for (int i = 0; i < 5; i++) {
        array[i] = i;
    }

    // Output the values using cout
    cout << array[0] << endl;
    cout << array[1] << endl;
    cout << array[2] << endl;
    cout << array[3] << endl;
    cout << array[4] << endl;

    // This loop outputs the values again
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
}

    
   

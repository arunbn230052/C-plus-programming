#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter your character between A and Z: ";
    cin >> ch; 
    if ((ch >= 65) && (ch <= 90)) {
        cout << "Entered character is in capital form" << endl;
    }
    else if ((ch >= 97) && (ch <= 122)) {
        cout << "Entered character is in small form" << endl;
    }
    else {
        cout << "Entered character is not an alphabet between A and Z" << endl;
    }

    return 0;
}

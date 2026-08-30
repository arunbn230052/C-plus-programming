#include<iostream>

using namespace std;

 void reverseString(char name[]);

 int main(){
    reverseString("Arun Patel");

    return 0;
 }

void reverseString(char name[]) {
    int length = 0;

    while (name[length] != '\0') {
        length++;
    }
    cout << "Reversed name: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << name[i];
    }
    cout << endl;
}
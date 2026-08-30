#include<iostream>
using namespace std;

void characterArray(); 

int main() {
    characterArray(); 
    return 0; 
}

void characterArray() {
    char name[15] = "Arun Prasad";  

    int i = 0;
    while (name[i] != '\0') {
        cout << name[i];
        i++;
    }
    cout << endl; 

    name[0] = 'A';
    name[1] = 'R';
    name[2] = 'A';
    name[3] = 'U';
    name[4] = 'N';
    name[5] = ' ';
    name[6] = 'P';
    name[7] = 'R';
    name[8] = 'A';
    name[9] = 'S';
    name[10] = 'A';
    name[11] = 'D';
    name[12] = '.';
    name[13] = '\0';

    char inp;
    i = 0; 

    while (i < 5) {
        cout << "Input character: ";
        cin >> inp;
        name[i] = inp;
        i++;
    }

    cout << name << endl;
}



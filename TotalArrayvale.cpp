#include<iostream>
#include<cstring>
using namespace std;

int main(){
  
    char name[12] = {"Arun Prasad"};
    cout << "Length using strlen: " << strlen(name) << endl;

    int i = 0;
    int counter = 0;
    while(name[i] != '\0'){
        counter++;
        i++;
    }
    
    cout << "Total characters using manual count: " << counter << endl;

    return 0;
}
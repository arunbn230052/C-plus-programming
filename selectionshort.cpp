#include<iostream>

using namespace std;

void selectionSort(){
    int arr[7] = {6, 8, 3, 0, 7, 5, 4};
    int small = arr[0];

    for(int i = 1; i < 7; i++){
        if(arr[i] < small){
            small = arr[i];
        }
    }

    cout << "The smallest number is: " << small << endl;  
}

int main() {
    selectionSort();  
    return 0;
}

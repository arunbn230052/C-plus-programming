#include<iostream>

using namespace std;

void selectionSort(){

    int arr[10] = {2, 4, 6, 1, 8, 7, 3, 5, 1, 0};
    int size = 10;

    for(int i = 0; i < size - 1; i++){
        int index = i;
        for(int j = i + 1; j < size; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    selectionSort();
    return 0;
}


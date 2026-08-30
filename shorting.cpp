#include<iostream>

using namespace std;

void bubbleSort(){

    int list[]= {5,3,6,7,8,9,1, 0,2,};
    int size=10;
    for(int j =0; j<size; j++){
    for(int i=0; i<size-1; i++){
        if(list[i]>list[i+1]){
            int temp = list[i+1];
            list[i+1]=list[i];
            list[i]=temp;
            temp=list[i];
        }
        }
        cout<<"pass"<<j+1<<endl;
        for(int i=0; i<size; i++){
            cout<<list[i]<<" ";
        }
        cout<<endl;
    }
    for(int i=0; i<size; i++){
        cout<<list[i]<<" ";
    }
    cout<<endl;
}
int main(){
    bubbleSort();

}

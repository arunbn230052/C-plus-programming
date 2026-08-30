#include<iostream>

using namespace std;

void checkEvenOdd();

int main(){
    int var;
    cout<<"Enter any intger \n";
    cin>>var;
   checkEvenOdd();
}
void checkEvenOdd(){
 int num;
    cout<<"Enter your any positive number \n";
    cin>>num;
    if(num%2==0){
        cout<<"number is even \n";

    }
    else{
        cout<<"number is odd \n";

    }
}

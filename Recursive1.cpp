#include<iostream>

using namespace std;

void fibbonacci(int step, int a, int b){

   // int a=0; int b=1;
    if(step==0){
        return;
    }
    if(a==0 && b==1){
        cout<<0<<" "<<1<<" ";
    }

    for(int i=0; i<step; i++){
        int temp = a+b;
        cout<<temp<<" ";
        a=b;
        b=temp;
        // fibbonacci(step-1, a, b);
    }
}

int main(){

    fibbonacci(10, 0, 1);

}
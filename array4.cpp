#include<iostream>

using namespace std;
float addTwoNumbers(int a, float b);
  
    int main(){
        float sum = addTwoNumbers(5, 5.5);
        cout<<"sum is : "<<sum<<endl;

    }

    float addTwoNumbers(int a, float b){
        float add = a+b;
        return add;
    }


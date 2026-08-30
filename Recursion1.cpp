#include<iostream>

using namespace std;

int a = 50;
int b = 60;

void addNumbers(){

    int a = 5;
    int b = 6;

    int add = a+b;

    cout<<"addition is:"<<add<<endl;
}
 
 void subNumbers(){
    int a = 5;
    int b = 6;
    int sub = a-b;
    cout<<"Substraction is:"<<sub<<endl;
    
 }
 void muNumber(){
    int mul = a*b;
    cout<<"Multiplication is: "<<mul<<endl;
 }

 int main(){
    addNumbers();
    subNumbers();

    return 0;
 }



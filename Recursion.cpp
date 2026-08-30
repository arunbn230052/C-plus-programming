#include<iostream>

using namespace std;

int localvariable();

int main(){
localvariable();
int add = localvariable();
cout<<"Value of Addition is: "<<add<<endl;

}

int localvariable(){

    int a=5;
    int b=5;
    int add =a+b;

    cout<<"Addition: "<<add<<endl;
    return add;
}
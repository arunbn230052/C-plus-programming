#include<iostream>
using namespace std;

void recursionFunc(){
    static int i = 0;
    if(++i<5)
    
    recursionFunc();
    cout<<"Hello World\n";
}

int main(){
    recursionFunc();
}
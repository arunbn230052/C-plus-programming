#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter your any number \n";
    cin>>num;
    for(int i=1; i<=10; i++){
        num*=2;
        cout<<"your number is = "<<i<<"="<<num*i<<endl;
    }
}
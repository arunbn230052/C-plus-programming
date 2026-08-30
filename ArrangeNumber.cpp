#include<iostream>
using namespace std;
int a,b;
int main(){
    cout<<"Enter your any two integer \n";
    cin>>a>>b;
    if(a<b){
        cout<<a<<" "<<b<<endl;
    }
    else if(a>b){
        cout<<b<<" "<<a<<endl;
    }
    else{
        cout<<"Error \n";
    }
}
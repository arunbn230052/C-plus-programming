#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any charcter"<<endl;
    cin>>ch;
    if(ch>='A'&&ch<='Z'){
    cout<<"enter charctered is in capital letter"<<endl;
    }
    else if(ch>='0'&&ch<='9'){
        cout<<"entered charcterd is between 0-9"<<endl;

    }
    else{
        cout<<"entered charcterd is not valid entry"<<endl;
    }

}
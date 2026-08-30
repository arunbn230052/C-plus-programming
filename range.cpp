#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(ch>='A'||ch<='Z'){
        cout<<"entered charctered is in capital letter"<<endl;
    }
    else if(ch>='a'||ch<='z'){
        cout<<"entered charctered is samll letter"<<endl;
    }
    else{
        cout<<"error"<<endl;
    }
}

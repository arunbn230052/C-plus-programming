#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter any vowel charcter letter";
    cin>>ch;
    if(ch>='A'&& ch<='z'){
        ch=char(ch+32);
    }
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        cout<<"you have entered vowel charcter"<<ch<<endl;
    }
    else{
        cout<<"you have entered charcter other than vowel"<<ch<<endl;
    }
}
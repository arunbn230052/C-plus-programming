#include<iostream>
#include<limits>
using namespace std;
 int main(){
    cout<<"Enter your name \n";
    string name;
    getline(cin, name);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    string address;
    cout<<"enter your address \n";
    getline(cin, address);
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cin>>name;
    cout<<"Enter your age \n";
    int age;
    cin>>age;
    cout<<"Enter your section \n";
    char sec;
    cin>>sec;
    cout<<"your name is :"<<name<<endl;
    cout<<"your address is:"<<address<<endl;
    cout<<"your age is :"<<age<<endl;
    cout<<"your section :"<<sec<<endl;

 }
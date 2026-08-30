#include<iostream>
using namespace std;
int main(){
    int a=10;
    int b=6;
    cout<<"is a graeter than b? "<<((a<b) ||(a>b))<<endl;
    cout<<"is a less than b? "<<((a<b) && (a>b))<<endl;
    cout<<"are a and b equal in manguate? "<<!(a==b) <<endl;
    cout<<"are a nad b not equal in manguate? "<<!((a<b)||(a>b))<<endl;

}
#include<iostream>
using namespace std;

int main(){
    int num, rem, onum, palin=0;
    cout<<"entr your number\n";
    cin>>num;
    onum=num;
    while(num!=0){
        rem=num%10;
        palin=(palin*10)+rem;
        num=num/10;
    }
    if(onum==palin){
        cout<<"plaindrome\n";
    }
    else{
        cout<<"Not plaindrome";
    }
}
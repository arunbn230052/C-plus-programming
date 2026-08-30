#include<iostream>
using namespace std;
int main(){
    // for(int i= int('A'); i<=int('z'); i++){
    //     cout<<char(i)<<" ";
    // }
    // cout<<endl;
    const int count_limit =5;
    int counter =0;
    for(int i=0; i<=100; i+=2){
         cout<<i<<' ';
        counter ++;
        if(counter==count_limit && counter !=0){
            
            cout<<endl;
            counter=0;
            // cout<<i<<" ";
        }
    }
    if (counter!=0){
        cout<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
void sumNat(int i,int sum){
    // int i =0;
    if(i<=5){
        sum+=i;
        sumNat(++i,sum);
        // cout<<sum<<endl;
    }
    else
    cout<<"Sum of natural numbers till 5 is "<<sum<<endl;
}

void sumNatAnother(){
    static int i = 0, sum = 0;
    if(++i<=5){
        sum+=i;
        sumNatAnother();
    }
    else
    cout<<"The sum of natural numbers till 5 in another function is "<<sum<<endl;
}

int sumNat2(int num){
    if(num==0) return 0;
    return num+sumNat2(num-1);
}


int main(){
    // sumNat(0,0);
    // sumNatAnother();
    cout<<"Sum of natural numbers till 5 using recursion using return: "<<sumNat2(5)<<endl;
    return 0;
}
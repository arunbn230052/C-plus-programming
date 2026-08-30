#include<iostream>

using namespace std;

int main (){
    int sum=0;
cout<<"enter your any vale "<<endl;
// cin>>sum;
    int arr[5]= {1,2,3,4,5};
    for(int i=0; i<5; i++){
         sum+=arr[i];
        
    }
     cout<<" your vale of sum is : "<<sum<<" "<<endl;
}

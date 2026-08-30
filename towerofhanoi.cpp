#include<iostream>

using namespace std;

void toh(int disk, char src, char aux, char des){
    if(disk==1){
    cout<<"move disk"<<disk<<"from"<<"src<<"<<"toh"<<"des"<<endl;
    return;
    }
    toh(disk-1, src, des, aux);
    cout<<"move disk"<<disk<<"from"<<"src<<"<<"toh"<<"des"<<endl;
    toh(disk-1, aux,src, des);
}

int main(){
    toh(3, 'S', 'A', 'D');
}


#include<iostream>
using namespace std;
int main(){
    int mark;
    float total_mark_Physic, Science, Math, Social, Health;
    cout<<"enter your mark"<<endl;
    cin>>mark;
    if(mark >90&&mark<=100){
        cout<<"Congratulation! your score A+ \n "<<endl;
    }
    else if(mark >80&&mark<=90){
        cout<<"your score is B+ \n"<<endl;
    }
    else if(mark >70&&mark<=80){
        cout<<"your score is C+ \n"<<endl;
    }
    else if(mark >60&&mark<=70){
        cout<<"your score is C \n "<<endl;
    }
    else if(mark >50&&mark<=60){
        cout<<"your score is D+ \n"<<endl;
    }
    else if(mark >40&&mark<=50){
        cout<<"your score is D \n"<<endl;
    }
    else{
        cout<<"sorry Bro you are fail \n "<<endl;
    }
}
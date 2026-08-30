#include<iostream>
using namespace std;
int main(){
    float grade;
    cout<<"enter your grade"<<endl;
    cin>>grade;
    if(grade>=0 && grade<=45){
        cout<<"fail"<<endl;
    }
    else if(grade>=45 && grade<=60){
        cout<<"you have passed with third divisin \n";
    }
    else if(grade>=60 && grade<=70){
        cout<<"you have passed with second divisin \n";
    }
    else if(grade>=70 && grade<=90){
        cout<<"you have passed first division \n";

    }
    else if(grade>=90 && grade<=100){
        cout<<"you got exclent grade \n";
    }
}
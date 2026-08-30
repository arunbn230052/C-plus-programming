#include<iostream>

using namespace std;

int main(){
    // cout<<"(10.5 + 2 * 3)/ (45 - 3.5) = ";
    // cout<<"(10.5 + 2 * 3)/ (45 - 3.3)"<<endl;

    // cout<<"C++"<< " and Jva"<<endl;
    // cout<<"C++"<<endl<<"Jva"<<endl;
    // cout<<"C++,"<<"Jva,"<<"and C# "<<endl;

//   const double PI = 3.14159;

//   double radius;
//   cout<<"Enter a radius: ";
//   cin>>radius;
//   double area = PI * radius * radius;
//   cout<<"The area is = ";
//   cout<<area<<endl;

 int second;
 cout<<"Enter a second: ";
 cin>>second;
 cout<<"The second is "<<second<<endl;
 int minutes = second / 60;
 second %= 60;
 int remaining_second = second % 60;
 cout<<"The minutes is "<<minutes<<", and the remaining second is "<<remaining_second<<endl;

  return 0;



   
}
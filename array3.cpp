#include<iostream>

using namespace std;

float calcArea(float r);

int main(){
  float area;
  area = calcArea(1.5);
 //  calcArea(1.5);
}
float calcArea(float r){
  float a = 3.1415*r*r;
  cout<<"Area of circle is : "<<a<<endl;
  return a;
}
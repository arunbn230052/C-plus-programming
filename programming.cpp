#include<iostream>

using namespace std;

int main(){
    cout<<"Hello World!"<<endl;
    cout<<"This is a c++ program."<<endl;
    cout<<"I am Learning C++ Programming."<<endl;

    double radius;
    double area;
    const double pi = 3.14159;
    radius = 20;
    area = radius * radius * pi;
    cout <<" The area is = "<<area<<endl;

    double radius;
    double area;
    cout<<"Enter a radius: ";
    cin>>radius;
    double area = radius * radius * 3.14159;
    cout<<"The area is = "<<area<<endl;

    double numbers1, numbers2, numbers3;
    cout<<"Enter three numbers: ";
    cin>>numbers1>>numbers2>>numbers3;
    double average = (numbers1 + numbers2 + numbers3) / 3;

    cout<<"The average of the three numbers is = "<<average<<endl;
    cout<<"The average of "<<numbers1<<" "<<numbers2<<" and "<<numbers3<<" is = "<<average<<endl;

    double width;
    double weight;
    double height;
    double volume;
    cout<<"Enter the width, weight, and height, of a rectangular prism: ";
    cin>>width>>weight>>height;

    volume = width * weight * height;
    cout<<" The volume of the rectangular prism is = "<<volume<<endl;
    cout<<"The volume of the rectangular prism is = "<<width*weight*height<<endl;



    return 0;
}
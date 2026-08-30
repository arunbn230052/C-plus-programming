#include<iostream>
#include<cstdlib>  
#include<Ctime>
using namespace std;

int main() {
    srand(time (0));  

    int r = rand() % 10;  
    int r1 = rand() % 10; 
    cout << "Random number 1: " << r << endl;
    cout << "Random number 2: " << r1<<endl;
}
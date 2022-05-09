// Q1 Write a C++ program to find the size of int, float, double and char. 
#include <iostream>
using namespace std; 
int main() {
    int a; 
    cout<<"Size of int data type is: "<<sizeof(a)<<" bytes"<<endl;
    float b; 
    cout<<"Size of float data type is: "<<sizeof(b)<<" bytes"<<endl;
    double c; 
    cout<<"Size of double data type is: "<<sizeof(c)<<" bytes"<<endl;
    char d;
    cout<<"Size of char data type is: "<<sizeof(d)<<" byte"<<endl;

    return 0; 
}

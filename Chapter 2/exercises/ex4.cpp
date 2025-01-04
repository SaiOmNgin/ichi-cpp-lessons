#include<iostream>
using namespace std;

int main() {
    int num1, num2, temp;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    cout<<"Before swapping, the first number is "<<num1<<"\t"<<" and the second number is "<<num2;


    temp = num1;
    num1 = num2;
    num2 = temp;

    //b=a+b;
    //a=b-a;
    //b=b-a;
    cout<<"The first variable is "<<num1<<endl;
    cout<<"The second variable is "<<num2<<endl;
    cout<<"After swapping, the first number is "<<num1<<"\t"<<" and the second number is "<<num2;


    return 0;
    
}
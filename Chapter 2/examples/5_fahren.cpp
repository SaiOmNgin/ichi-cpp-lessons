#include<iostream>
using namespace std;
//enter Fahrenheit and get Celsius 
int main() 
{
    int ftemp;
    cout<<"Enter temperature in Fahrenheit: ";
    cin>>ftemp;
    int ctemp = (ftemp-32) * 5/9;
    cout<<"The temperature in Celsius: "<<ctemp<<endl;
    return 0; 
}
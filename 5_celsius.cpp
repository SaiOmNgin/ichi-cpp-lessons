#include<iostream>
using namespace std;
//enter Celsius and get Celsius

int main() 
{
    int ctemp;
    cout<<"Enter temperature in Celsius: ";
    cin>>ctemp;
    double ftemp = (ctemp * 9/5)+32;
    cout<<"The temperature in Fahrenheit: "<<ftemp<<endl;
    return 0; 
}
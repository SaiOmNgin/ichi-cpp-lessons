#include<iostream>
using namespace std;

int main() {
    // int num; 
    // cout<<"Enter any number: ";
    // cin>>num;
    // char word = (static_cast<char>(num));
    // cout<<"The character is "<<word<<endl;
    // return 0;

    int intVar = 150000;
    intVar = (intVar * 10 ) / 10;
    cout<<"intVar = "<<intVar<<endl;

    int intVar1 = 15000;
    intVar1 = (static_cast<double>(intVar) *100000 ) / 10;
    cout<<"intVar1 = "<<intVar1<<endl;
    return 0;
}
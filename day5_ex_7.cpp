#include<iostream>
using namespace std;

int main() {
    double usd;
    cout<<"Enter amount in Dollars$: ";

    cin>>usd;
    cout<<"Your money in German Deutsche Mark is "<< usd/0.584<<endl;
    cout<<"Your money in Japanese yen is "<< usd/0.00955<<endl;
    cout<<"Your money in French Franc is "<< usd/0.584<<endl; 
    cout<<"Your money in British pound is "<< usd/1.487<<endl;
    return 0;
}
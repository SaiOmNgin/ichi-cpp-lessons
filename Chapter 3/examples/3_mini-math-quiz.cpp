#include<iostream>
using namespace std;

int main() 
{
    int num;
    cout<<"What is the answer of 10 + 5? Enter a number: ";
    cin>>num;
    if(num==15)
        cout<<"Your answer is correct."<<endl;
    else
        cout<<"Your answer is not correct. The correct answer is 15"<<endl;
    return 0;
}
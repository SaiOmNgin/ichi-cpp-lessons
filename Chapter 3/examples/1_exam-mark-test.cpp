#include<iostream>
using namespace std;

int main() { 
    int mark;
    cout<<"Enter the student's mark: ";
    cin>>mark;

    if(mark>=50) 
        cout<<"Pass"<<endl;
    
    else
        cout<<"Fail"<<endl;
    return 0;
}
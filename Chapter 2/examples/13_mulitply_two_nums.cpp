#include<iostream>
using namespace std;

int main() {
    int a, b, c, d;
    char dummychar;
    cout<<"Enter first fraction(e.g. 1/2): "; cin>>a>>dummychar>>b;
    cout<<"Enter second fraction(e.g. 2/5): "; cin>>c>>dummychar>>d;
    
    cout<<"Multiplication of fraction numbers is "<<(a*c)<<"/"<<(b*d)<<endl;
    return 0;
}
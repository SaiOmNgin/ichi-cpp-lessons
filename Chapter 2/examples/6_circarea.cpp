#include<iostream>
using namespace std;

int main() 
{
    float radius;
    const float PI = 3.14159F;
    cout<<"Enter radius of circle: ";
    cin>>radius;
    float area = PI * radius * radius;
    cout<<"The area of circle is "<<area<<endl;
    return 0;
}
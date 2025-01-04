#include<iostream>
using namespace std;

int main() {
    int length, width, area, perimeter;
    cout<<"Enter the length of a rectangle: ";
    cin>>length;
    cout<<"Enter the width of a rectangle: ";
    cin>>width;
    area = length * width;
    perimeter = 2*(length + width);
    cout<<"The area of a rectangle is "<<area<<endl;
    cout<<"The perimeter of a rectangle is "<<perimeter<<endl;

    return 0;
}
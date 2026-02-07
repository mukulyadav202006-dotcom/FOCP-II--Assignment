#include<iostream>
using namespace std;
int main(){
    //method 1
    int a, b, temp;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the vlaue of b: ";
    cin>>b;
    temp = a;
    a=b;
    b=temp;
    cout<<"The value of a after swapping is: "<<a;
    cout<<"\nThe value of b after swapping is: "<<b;

    //method 2
    cout<<"\nMethod 2";
    int x, y;
    cout<<"\nEnter the vlaue of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;
    x =x+y;
    y=x-y;
    x=x-y;
    cout<<"The value of x after swapping is: "<<x;
    cout<<"\nThe value of y after swapping is: "<<y;

    return 0;
}
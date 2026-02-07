#include<iostream>
using namespace std;
int main(){
    float marks1, marks2, marks3;
    cout<<"Enter the marks of 1st student: ";
    cin>>marks1;
    cout<<"Enter the marks of 2nd student: ";
    cin>>marks2;
    cout<<"Enter the marks of 3rd student: ";
    cin>>marks3;
    float average= (marks1+marks2+marks3)/3;
    cout<<"The average of three students is: "<<average;
    return 0;
}
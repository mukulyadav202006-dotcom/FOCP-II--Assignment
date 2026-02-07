#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;
    if(year%4==0){
        cout<<"Entered year is a leap year.";
    }
    else{
        cout<<"Entered year is not a leap year.";
    }
    return 0;
}
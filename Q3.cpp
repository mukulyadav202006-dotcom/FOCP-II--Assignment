#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Choose 1 for fahrenheit to celsius and 2 for vice-versa: ";
    cin>>n;
    if(n==1){
        float f;
        cout<<"Enter the temperature in Fahrenheit: ";
        cin>>f;
        float c=(f-32)*5/9;
        cout<<"The temp. in celsius after conversion is: "<<c;            
    }
    else{
        float c;
        cout<<"Enter the temp. in celsius: ";
        cin>>c;
        float f=(c*9/5)+32;
        cout<<"The temp. in fahrenheit aftre conversion is: "<<f;
        }
    return 0;
}
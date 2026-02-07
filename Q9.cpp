#include<iostream>
#include<cctype>
using namespace std;
int main(){
    char n;
    cout<<"Enter any character or number:";
    cin>>n;
    if(isdigit(n)){
        cout<<"Entered character is a number.";
    }
    else if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I'|| n=='O'
       || n== 'U'){
        cout<<"The entered character is a vowel.";
    }
    else{
        cout<<"Entered character is a constant.";
    }
  return 0;
}
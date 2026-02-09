#include<iostream>
using namespace std;
int main()
{
    int num;
    int factor =0;
    cout<<"Enter any number: ";
    cin>>num;
    for(int i=1; i<num;i++){
        if(num%i==0){
            cout<<""<<i<<" is a factor of "<<num<<endl;
            factor += i;
        }
    }
    if(factor==num){
        cout<<""<<num<<" is a perfect number";
    }
    else{
        cout<<""<<num<<" is not a perfect number";
    }
    return 0;
}
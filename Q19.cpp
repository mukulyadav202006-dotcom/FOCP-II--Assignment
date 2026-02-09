#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    int prime=0;
    cout<<"Enter the range of numbers in which you want to find total prime numbers: ";
    cin>>num1>>num2;
    cout<<"The range you choose is from "<<num1<<" to "<<num2<<endl;
    for(int i=num1; i<=num2; i++){
        for(int j=2; j<i;j++){
            if(i%j==0){
                //cout<<""<<i<<" is not a prime number"<<endl;
                break;
            }
            else{
                prime++;
                cout<<""<<i<<" is a prime number"<<endl;
            }
            //cout<<""<<i<<" is a prime number"<<endl;   
        }
    }
    cout<<"Total prime numbers in the given range is: "<<prime;
    return 0;
}
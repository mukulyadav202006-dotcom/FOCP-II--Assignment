#include <iostream>
using namespace std;
int main()
{
    int num, flag=0;
    cout << "Enter any number: ";
    cin >> num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            flag =1;
        }
    }
    if(flag==1){
        cout<<""<<num<<" is not a prime number";
    }
    else{
        cout<<""<<num<<" is a prime number";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int id;
    cout<<"Enter the event id number: ";
    cin>>id;
    if(id%3==0){
        cout<<"The event is tagged as'Buzz'.";
    }
    else if(id%5==0){
        cout<<"The event is tagged as 'Fuzz'.";
    }
    else if(id%3==0 && id%5==0){
        cout<<"The event is tagged as 'BuzzFuzz'.";
    }
    else{
        cout<<"The event id is invalid.";
    }
    return 0;
}
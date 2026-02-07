#include<iostream>
using namespace std;
int main(){
    float item_Num, quantity, unit_Price, weight;
    cout<<"Enter the item number: ";
    cin>>item_Num;
    cout<<"Enter the number of quantity: ";
    cin>>quantity;
    cout<<"Enter the unit price per gram: ";
    cin>>unit_Price;
    cout<<"Enter the total weight in grams: ";
    cin >>weight;

    float total_cost= quantity*unit_Price*weight;
    float discount = total_cost*0.8;
    cout<<"The total cost of products after 20% discount is: "<<discount;
    return 0;
}
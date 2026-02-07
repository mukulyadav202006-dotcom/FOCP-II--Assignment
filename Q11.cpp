#include <iostream>
using namespace std;
int main()
{
    int items;
    float price;
    cout << "Enter the cost of one item: ";
    cin >> price;
    cout << "Enter the total number of items: ";
    cin >> items;
    if (items > 1000)
    {
        cout << "10% dicount will be applied.";
        float total_price = items * price * 0.9;
        cout << "\nTotal price of items after discount is: " << total_price;
    }
    else
    {
        cout << "\nNo discount applicable. Total price is: " << items * price;
    }
    return 0;
}
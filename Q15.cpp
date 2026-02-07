#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the total number of sales entries: ";
    cin >> n;
    int current_sales,max_sales=0;
    for (int i = 0; i < n; i++)
    {
        cout << "Sales figure for " << i + 1 << " entry: ";
        cin >> current_sales;
        if(current_sales > max_sales){
            max_sales=current_sales;
        }
    }
    cout<<"Maximum sales figure is: "<<max_sales;
    return 0;
}
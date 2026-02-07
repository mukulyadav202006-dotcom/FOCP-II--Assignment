#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "For addition choose 1\nFor substraction choose 2\nFor multiplication choose 3\nFor division choose 4\n";
    cout << "Enter your choice: ";
    cin >> choice;
    float num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    switch (choice)
    {
    case 1:
        cout << "Sum of " << num1 << " and " << num2 << " is: " << num1 + num2;
        break;
    case 2:
        cout << "Difference of " << num1 << " and " << num2 << " is: " << num1 - num2;
        break;
    case 3:
        cout << "Product of " << num1 << " and " << num2 << " is: " << num1 * num2;
        break;
    case 4:
        if (num2 != 0)
        {
            cout << "Division of " << num1 << " by " << num2 << " is: " << num1 / num2;
        }
        else
        {
            cout << "Error! Division by zero.";
        }
    }
return 0;
}
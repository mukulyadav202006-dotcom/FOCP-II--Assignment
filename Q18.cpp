#include <iostream>
using namespace std;
int main()
{
    int id;
    int temp;
    int reverse = 0;
    int remainder;
    cout << "Enter your id: ";
    cin >> id;
    temp = id;
    while (temp != 0)
    {
        remainder = temp % 10;
        reverse = reverse * 10 + remainder;
        temp /= 10;
    }
    cout << "Your id in reverse is: " << reverse;
    if (id == reverse)
    {
        cout << "\nYour id is palindrome";
    }
    else
    {
        cout << "\nYour id is not a palindrome";
    }
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a,b and c for quadratic equation ax^2+bx+c=0: ";
    cin >> a >> b >> c;
    int D = (b * b) - 4 * a * c;
    if (D > 0)
    {
        cout << "The roots are real and different.\n";
        float root1 = (-(b) + sqrt(D)) / (2 * a);
        float root2 = (-(b) - sqrt(D)) / (2 * a);
        cout << "Root1: " << root1 << "\nRoot2: " << root2;
    }
    else if (D == 0)
    {
        cout << "The roots are eqaul and real.\n";
        float root = -(b) / (2 * a);
        cout << "Roots: " << root;
    }
    else
    {
        cout << "The roots are imaginary.";
    }
    return 0;
}
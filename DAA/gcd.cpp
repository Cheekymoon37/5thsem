#include <iostream>
using namespace std;

int gcdEuclid(int a, int b)
{
    while(b != 0)
    {
        cout << "a = " << a
             << ", b = " << b
             << ", a % b = " << a % b
             << endl;

        int temp = a % b;
        a = b;
        b = temp;
    }

    return a;
}

int main()
{
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    int gcd = gcdEuclid(a, b);

    cout << "\nGCD = " << gcd << endl;

    return 0;
}

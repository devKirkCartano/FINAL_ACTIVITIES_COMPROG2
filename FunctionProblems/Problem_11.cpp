/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #11: POWERS
*/
#include <iostream>
using namespace std;

int integerPower(int num, int power);

int main()
{
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout << base << " to the power " << exp << " is: " << integerPower(base, exp) << endl;
    return 0;
}

int integerPower(int num, int power)
{
    int base = 1;
    int result;
    for (int i = 0; i < power; i++)
    {
        base *= num;
        result = base;
    }
    return result;
}
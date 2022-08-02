/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #1: ODD UP, EVEN DOWN
*/
#include <iostream>
using namespace std;

int main()
{
    int num[10];
    int transformEven;
    int transformOdd;
    cout << "Enter 10 numbers:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> num[i];
    }

    cout << "\nOdd-Even Transformation:" << endl;
    for (int i = 0; i < 10; i++)
    {
        if ((num[i] % 2) == 0)
        {
            transformEven = num[i] - 2;
            cout << transformEven << " ";
        }
        else
        {
            transformOdd = num[i] + 2;
            cout << transformOdd << " ";
        }
    }
    cout << endl;
    return 0;
}
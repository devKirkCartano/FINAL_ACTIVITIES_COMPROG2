/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #5: PP #1 REWRITTEN using pointer notation
*/
#include <iostream>
using namespace std;

int main()
{
    int num[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int(*ptrNum)[10]; // pointer to the array of 10 elements
    ptrNum = &num;

    int transformEven, *ptrTransformEven;
    ptrTransformEven = &transformEven; 

    int transformOdd, *ptrTransformOdd; 
    ptrTransformOdd = &transformOdd; 

    cout << "Enter 10 numbers:\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> (*ptrNum)[i];
    }

    cout << "\nOdd-Even Transformation:" << endl;
    // Transform odd-even using pointer notation
    for (int i = 0; i < 10; i++)
    {
        if ((*ptrNum)[i] % 2 == 0)
        {
            *ptrTransformEven = (*ptrNum)[i] - 2;
            cout << transformEven << " ";
        }
        else
        {
            *ptrTransformOdd = (*ptrNum)[i] + 2;
            cout << transformOdd << " ";
        }
    }
    cout << endl;
    return 0;
}
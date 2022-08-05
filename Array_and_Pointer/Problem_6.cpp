/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
*/
#include <iostream>
using namespace std;

int SumOfEven(int (*ptrArr)[]);
int SumOfOdd(int (*ptrArr)[]);
int main()
{
    int num[10];
    int(*ptrNum)[10]; // pointer to the array of 10 elements
    ptrNum = &num;
    cout << "Enter 10 numbers\n";
    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> (*ptrNum)[i];
    }
    cout << endl;

    cout << "Sum of Even elements: " << SumOfEven(ptrNum) << endl;
    cout << "Sum of Odd elements: " << SumOfOdd(ptrNum) << endl;
    return 0;
}

int SumOfEven(int (*ptrArr)[])
{
    int evenSum;
    for (int i = 0; i < 10; i++)
    {
        if ((*ptrArr)[i] %2 == 0)
        {
            evenSum += (*ptrArr)[i];
        }
    }
    return evenSum;
}

int SumOfOdd(int (*ptrArr)[])
{
    int oddSum;
    for (int i = 0; i < 10; i++)
    {
        if ((*ptrArr)[i] % 2 != 0)
        {
            oddSum += (*ptrArr)[i];
        }
    }
    return oddSum;
}
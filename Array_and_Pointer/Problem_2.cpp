/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #2: SUM OF ODD AND EVEN NUMBERS
*/
#include <iostream>
using namespace std;

int SumOfEven(int arr[]);
int SumOfOdd(int arr[]);
int main()
{
    int num[10];
    cout << "Enter 10 numbers:\n";

    for (int i = 0; i < 10; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> num[i];
    }
    cout << endl;
    cout << "Sum of even elements: " << SumOfEven(num) << endl;
    cout << "Sum of odd elements: " << SumOfOdd(num) << endl;
    return 0;
}

int SumOfEven(int arr[])
{
    int evenSum = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((arr[i] % 2) == 0)
        {
            evenSum += arr[i];
        }
    }
    return evenSum;
}

int SumOfOdd(int arr[])
{
    int oddSum = 0;
    for (int i = 0; i < 10; i ++)
    {
        if ((arr[i] % 2) != 0)
        {
            oddSum += arr[i];
        } 
    }
    return oddSum;
}

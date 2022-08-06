/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #9: SWAP AND SMALL
*/
#include <iostream>
using namespace std;

int EXCHANGE(int *num_one, int *num_two);
int SMALL(int *num_one, int *num_two);

int main()
{
    int numOne;
    int numTwo;

    do
    {
        cout << "\nEnter first number: ";
        cin >> numOne;
        if (numOne < 0)
        {
            cout << "\nPlease enter a non-negative integer\n";
        }
    } while (numOne < 0);

    do
    {
        cout << "\nEnter second number: ";
        cin >> numTwo;
        if (numTwo < 0)
        {
            cout << "\nPlease enter a non-negative integer\n";
        }
    } while (numTwo < 0);

    cout << "\nOutput before the interchange:\n";
    cout << "numOne = " << numOne << endl;
    cout << "numTwo = " << numTwo << endl;

    int small = SMALL(&numOne, &numTwo);

    cout << "\nOutput after the interchange:\n";
    int swapped = EXCHANGE(&numOne, &numTwo);
    cout << "numOne = " << numOne << endl;
    cout << "numTwo = " << numTwo << endl;

    cout << "\nSmallest number: " << small << endl;
    return 0;
}

// Swap values using pointer
int EXCHANGE(int *num_one, int *num_two)
{
    int temp = *num_one;
    *num_one = *num_two;
    *num_two = temp;
    return 0;
}

// Determine smaller number
int SMALL(int *num_one, int *num_two)
{
    int small;
    if (*num_one < *num_two)
    {
        small = *num_one;
    }
    else if (*num_two < *num_one)
    {
        small = *num_two;
    }
    return small;
}

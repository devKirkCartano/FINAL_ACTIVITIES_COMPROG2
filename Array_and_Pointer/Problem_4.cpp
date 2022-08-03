/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #4: PP #3 REWRITTEN
*/
#include <iostream>
using namespace std;

int main()
{
    int array_size;
    cout << "\nEnter array size (Max:10) :: ";
    cin >> array_size;

    int num[array_size];
    cout << "\nEnter array elements ::\n";
    for (int i = 0; i < array_size; i++)
    {
        cout << "\nEnter arr [" << i << "] Element:: ";
        cin >> num[i];
    }

    cout << "\nStored Data Before Sorting In Array ::\n";
    for (int i = 0; i < array_size; i++)
    {
        cout << " " << num[i] << " ";
    }
    cout << endl;

    // Sort array in descending order
    int temp;
    for (int i = 0; i < array_size; i++)
    {
        for (int j = 0; j < array_size - 1; j++)
        {
            // Simulation: 4, 5
            if (num[j] < num[j + 1])
            {
                temp = num[j]; // temp = 4
                num[j] = num[j + 1]; // num[j] = 5
                num[j + 1] = temp; // temp = 4
            }
        }
    }

    cout << "\nStored Data After Sorting In Array ::\n";
    for (int i = 0; i < array_size; i++)
    {
        cout << " " << num[i] << " ";
    }
    cout << endl;
    return 0;
}
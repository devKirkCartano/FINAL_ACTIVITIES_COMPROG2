/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #10: COMPUTE ME
*/
#include <iostream>
using namespace std;

double GetSum(double arr[])
{
    double sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += arr[i];
    }
    return sum;
}
double GetDifference(double arr[])
{
    double difference;
    difference = arr[0] - arr[1] - arr[2];
    return difference;
}
double GetProduct(double arr[])
{
    double product = 1;
    for (int i = 0; i < 3; i++)
    {
        product *= arr[i];
    }
    return product;
}
double GetAverage(double arr[])
{
    double total = 0;
    double average;
    for (int i = 0; i < 3; i++)
    {
        total += arr[i];
    }
    average = total / 3;
    return average;
}
double GetSumOfSquares(double arr[])
{
    double numOneSquare, numTwoSquare, numThreeSquare;
    double sum;
    numOneSquare = arr[0] * arr[0];
    numTwoSquare = arr[1] * arr[1];
    numThreeSquare = arr[2] * arr[2];
    sum = numOneSquare + numTwoSquare + numThreeSquare;

    return sum;
}

int main()
{
    double num[3];

    cout << "Enter 3 numbers:\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "#" << i + 1 << ": ";
        cin >> num[i];
    }
    cout << "\nResult\n";
    cout << "\nSum: " << GetSum(num) << endl;
    cout << "Difference: " << GetDifference(num) << endl;
    cout << "Product: " << GetProduct(num) << endl;
    cout << "Average: " << GetAverage(num) << endl;
    cout << "Sum of Squares: " << GetSumOfSquares(num) << endl;
    return 0;
}
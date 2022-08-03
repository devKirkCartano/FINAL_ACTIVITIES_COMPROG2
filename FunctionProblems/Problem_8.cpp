/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #8: CALCULATOR
*/
#include <iostream>
using namespace std;

double BasicCalculator(double num_one, char operation, double num_two)
{
    double result;
    int base = 1;
    switch (operation)
    {
        case '+':
            result = num_one + num_two;
            break;
        case '-':
            result = num_one - num_two;
            break;
        case '*':
            result = num_one * num_two;
            break;
        case '/':
            result = num_one / num_two;
            break;
        case '^':
            for (int i = 0; i < num_two; i++)
            {
                base = base * num_one;
                result = base;
            }
            break;
    }
    return result;
}

int main()
{
    double numOne;
    double numTwo;
    char op;

    cout << "\nEnter the first number: ";
    cin >> numOne;

    cout << "\nEnter operation( +, - , *, / , ^): ";
    cin >> op;

    cout << "\nEnter the second number: ";
    cin >> numTwo;

    cout << "\nResult: " << numOne << " " << op << " " << numTwo << " = " << BasicCalculator(numOne, op, numTwo) << endl;
    return 0;
}
/*
Kirk Cedrick S. Cartano
BSIT 1 - 2
PRACTICE PROBLEM #12: QUALITY POINTS
*/
#include <iostream>
using namespace std;

int qualityPoints(int gwa);

int main()
{
    int average;
    cout << "Enter the student's average: ";
    cin >> average;

    cout << average << " on a 4 point scale is " << qualityPoints(average) << "\n";
    cout << endl;
    
    return 0;
}
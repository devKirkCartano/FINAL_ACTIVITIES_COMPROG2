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

int qualityPoints(int gwa)
{
    int equivalentPoints;

    if (gwa >= 90 && gwa <= 100)
    {
        equivalentPoints = 4;
    }
    else if (gwa >= 80 && gwa <= 89)
    {
        equivalentPoints = 3;
    }
    else if (gwa >= 70 && gwa <= 79)
    {
        equivalentPoints = 2;
    }
    else if (gwa >= 60 && gwa <= 69)
    {
        equivalentPoints = 1;
    }
    else if (gwa < 60)
    {
        equivalentPoints = 0;
    }
    return equivalentPoints;
}
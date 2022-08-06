#include <iostream>
// #include <string>
using namespace std;

void EateryName()
{
    cout << "\t\tKamay Kainan Restaurants " << endl;
    cout << "\t\tQuezon City" << endl;
}

void Display();

struct Customer
{
    // Customer's profile
    string customerName;
    int numOfCompanions;
    // Order Details
    int itemNum;
    string itemDescription;
    int price;
    int quantity;
};

int main()
{
    EateryName();
    struct Customer customer;
    int customerNum;
    cout << "\nEnter Customer's Name: ";
    getline(cin, customer.customerName);

    cout << "\nEnter Number of Companions: ";
    cin >> customer.numOfCompanions;

    cout << "\nOrder Details";

    for (int i = 0; i < customer.numOfCompanions; i++)
    {
        cout << "\nEnter Item Number: ";
        cin >> customer.itemNum;

        cout << "\nEnter Item Description: ";
        cin >> customer.itemDescription;

        cout << "\nEnter Number of Quantity: ";
        cin >> customer.quantity;

        cout << "\nPrice: ";
        cin >> customer.price;
    }
    return 0;
}
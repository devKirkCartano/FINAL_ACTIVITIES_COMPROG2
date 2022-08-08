#include <iostream>
// #include <string>
using namespace std;

const string asterisk(76, '*');
const string line(76, '-');
const string design(4, '*');
const string cashierName = "Kirk Cedrick Cartano";
string month, day;
const int year = 2022;

void DisplayName()
{
    cout << "\n\t\t\t      KAMAY KAINAN RESTAURANTS " << endl;
    cout << "\t\t\t\t    QUEZON CITY" << endl;
    cout << " \n\n  " << asterisk << endl;
}

void DisplayCashier();
void DisplayMenu();
void CustomerReceipt();

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

    DisplayName();
    DisplayCashier();
    struct Customer customer;
    int customerNum;
    string moreTransaction;

    // Validate month input
    do
    {
        cout << "\n  Enter month of the year [ 1 - 12 ]: ";
        cin >> month;
    } while (month != "1" && month != "2" && month != "3" && month != "4" && month != "5" && month != "6" && month != "7" && month != "8" && month != "9" && month != "10" && month != "11" && month != "12");

    // Validate date input
    do
    {
        cout << "\n  Enter the date [ 1 - 31 ]: ";
        cin >> day;
    } while (day != "1" && day != "2" && day != "3" && day != "4" && day != "5" && day != "6" && day != "7" && day != "8" && day != "9" && day != "10" && day != "11" && day != "12" && day != "13" && day != "14" && day != "15" && day != "16" && day != "17" && day != "18" && day != "19" && day != "20" && day != "21" && day != "22" && day != "23" && day != "24" && day != "25" && day != "26" && day != "27" && day != "28" && day != "29" && day != "30" && day != "31");

    do
    {
        system("cls"); // this clear screen function only works in windows operating system
        DisplayName();
        DisplayCashier();
        cin.ignore(1);

        cout << " \n  " << line << endl;
        cout << "\n\t\t\t    " << design << " CUSTOMER PROFILE " << design << endl;
        cout << "\n  Enter Customer's Name: ";
        getline(cin, customer.customerName);

        cout << "\n  Enter Number of Companions: ";
        cin >> customer.numOfCompanions;

        cout << " \n  " << line << endl;
        cout << "\n\t\t\t     " << design << " ORDER DETAILS " << design << endl;

        for (int i = 0; i < customer.numOfCompanions; i++)
        {
            cout << "\n  Enter Item Number: ";
            cin >> customer.itemNum;

            cout << "\n  Enter Item Description: ";
            cin >> customer.itemDescription;

            cout << "\n  Enter Number of Quantity: ";
            cin >> customer.quantity;

            cout << "\n  Price: ";
            cin >> customer.price;

            cout << " \n  " << line << endl;
        }
        system("cls");
        DisplayName();
        DisplayCashier();
        cout << " \n  " << line << endl;
        cout << "\n\t\t\t      KAMAY KAINAN RESTAURANTS " << endl;
        cout << "\n\t\t\t       OFFICIAL RECEIPT\n";
        
        cout << "\n  More Transaction?: ";
        cin >> moreTransaction;

        if (moreTransaction == "N" || moreTransaction == "n")
        {
            break;
        }
    } while (moreTransaction == "Y" || moreTransaction == "y");
    return 0;
}

void DisplayCashier()
{
    cout << "\n  Cashier Name: " << cashierName << "\t\t\t      Date: " << month << "/" << day << "/" << year << endl;
    cout;
}

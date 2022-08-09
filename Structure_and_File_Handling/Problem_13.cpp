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

void DisplayCashier()
{
	cout << "\n  Cashier Name: " << cashierName << "\t\t\t      Date: " << month << "/" << day << "/" << year << endl;
	cout;
}
void DisplayMenu();
void CustomerReceipt();

struct CustomerProfile
{
	string customerName;
	int numOfCompanions;
};

struct OrderDetails
{
	string itemNum;
	string itemDescription;
	int price;
	int quantity;
	double amount;
};

int main()
{

	DisplayName();
	DisplayCashier();
	struct CustomerProfile customer;
	int customerNum;
	string moreTransaction;
	string entry;
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

		// Declare array of structures
		cout << " \n  " << line << endl;
		cout << "\n\t\t\t     " << design << " ORDER DETAILS " << design << endl;
		struct OrderDetails order[customer.numOfCompanions];

		for (int i = 0; i < customer.numOfCompanions; i++)
		{
			cout << "\n  Order # " << i + 1 << endl;
			do
			{
				cout << "\n  Enter Item Number: ";
				cin >> order[i].itemNum;
				cin.ignore(1);
			} while (order[i].itemNum == "");

			do
			{
				cout << "\n  Enter Item Description: ";
				getline(cin, order[i].itemDescription);
			} while (order[i].itemDescription == "");

			do
			{
				cout << "\n  Enter Quantity: ";
				cin >> order[i].quantity;
				cin.ignore(1);

			} while (order[i].quantity <= 0);

			do
			{
				cout << "\n  Enter Item Price: ";
				cin >> order[i].price;
				cin.ignore(1);
			} while (order[i].price <= 0);


			if (i < customer.numOfCompanions - 1)
			{
				do
				{
					cout << "\n  More entry [Y/N]? : ";
					cin >> entry;
					cin.ignore(1);
					if (entry != "Y" && entry != "y" && entry != "N" && entry != "n")
					{
						cout << "\n [Please answer with Y or N] \n";
					}
				} while (entry != "Y" && entry != "y" && entry != "N" && entry != "n");

				if (entry == "N" || entry == "n")
				{
					customer.numOfCompanions = i + 1;
					break;
				}
			}
		}
		system("cls");
		DisplayName();
		DisplayCashier();
		cout << " \n  " << line << endl;
		cout << "\n\t\t\t      KAMAY KAINAN RESTAURANTS " << endl;
		cout << "\n\t\t\t          OFFICIAL RECEIPT\n\n";

		cout << "\n  Customer Name: " << customer.customerName << endl;

		// Calculate amount of each item
		for (int i = 0; i < customer.numOfCompanions; i++)
		{
			order[i].amount = order[i].quantity * order[i].price;
		}
		
		// Display list of orders in receipt
		cout << "\n  Item No.\tItem Description\tQty\t\tPrice\tAmount \n\n";
		for (int i = 0; i < customer.numOfCompanions; i++)
		{
			cout << "  " << order[i].itemNum << "\t\t" << order[i].itemDescription << "\t\t\t" << order[i].quantity << "\t\t" << order[i].price << "\t" << order[i].amount << endl;
		}

		cout << "\n  More Transaction?: ";
		cin >> moreTransaction;

		if (moreTransaction == "N" || moreTransaction == "n")
		{
			break;
		}
	} while (moreTransaction == "Y" || moreTransaction == "y");

	return 0;
}
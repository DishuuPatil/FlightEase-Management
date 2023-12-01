#include <iostream>
#include <fstream>
#include <iomanip>

void mainMenu()
{
	int lchoice;
	int schoice;
	int back;

	cout << "\t               XYZ Airlines \n"
		 << endl;
	cout << "\t______________Main Menu______________" << endl;

	cout << "\t____________________________________________________" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;

	cout << "\t|\t Press 1 to add the Customer Details    \t|" << endl;
	cout << "\t|\t Press 2 for Flight Registration        \t|" << endl;
	cout << "\t|\t Press 3 for Ticket and Charges         \t|" << endl;
	cout << "\t|\t Press 4 to Exit                        \t|" << endl;
	cout << "\t|\t\t\t\t\t\t|" << endl;
	cout << "\t_____________________________________________________" << endl;

	cout << "Enter the choice : ";
	cin >> lchoice;

	Details d;
	registration r;
	ticket t;

	switch (lchoice)
	{

	case 1:
	{
		cout << "__________Customers__________\n"
			 << endl;
		d.information();
		cout << "Press any key to go back to Main menu ";
		cin >> back;

		if (back == 1)
		{
			mainMenu();
		}
		else
		{
			mainMenu();
		}
		break;
	}

	case 2:
	{
		cout << "________Book a flight using this system ____________\n"
			 << endl;
		r.flights();
		break;
	}

	case 3:
	{

		cout << "_____GET YOUR TICKET____\n"
			 << endl;
		t.Bill();

		cout << "Your ticket is printed, you can collect it \n"
			 << endl;
		cout << "Press 1 to display your ticket ";

		cin >> back;

		if (back == 1)
		{
			t.dispBill();
			cout << "Press any key to go back to main menu:";
			cin >> back;
			if (back == 1)
			{
				mainMenu();
			}
			else
			{
				mainMenu();
			}
		}
		else
		{
			mainMenu();
		}
		break;
	}

	case 4:
	{
		cout << "\n\n\t_________Thank-you_______" << endl;
		break;
	}

	default:
	{
		cout << "Invalid input, Please try again!\n"
			 << endl;
		mainMenu();
		break;
	}
	}
}

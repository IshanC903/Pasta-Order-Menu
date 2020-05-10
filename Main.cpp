//BIT 2400 Assignment 3
//Ishan Chaurasia 101011068
//This is an interactive program that uses classes, getters, setters and arrays.

#include "Pasta.h"

PastaOrder * pastaArray;
int orderNum = 0;
int countHolder;

void Order_Function()
{

	int orderNum = 0;

	cout << "How many pastas would you like to order?: ";
	cin >> orderNum;

	countHolder = orderNum;

	pastaArray = new PastaOrder[orderNum];

	for (int i = 0; i < countHolder; i++)
	{
		system("CLS");

		string pastaChoice;
		//int servePeopleAmount;
		string sauceChoice;
		char veggiesChoice;
		char protienChoice;

		cout << "Pasta Order #" << i + 1 << ":" << endl << endl;
		cout << "Types of Pasta:" << endl << endl;;
		cout << "Penne.\nSpaghetti.\nFettuccine.\nLinguine.\nFusilli.\nRavioli.\nCannelloni.\nTortellini.\n\nYour Choice: ";
		cin >> pastaChoice;
		cout << endl;

		pastaArray[i].setpastaChoice(pastaChoice);

		cout << "Types of Sauces:" << endl << endl;
		cout << "Tomato.\nAlfredo.\nRose.\n\nYour Choice: ";
		cin >> sauceChoice;
		cout << endl;

		pastaArray[i].setsauceChoice(sauceChoice);

		cout << "Would you like veggies in your pasta?(Y/N): ";
		cin >> veggiesChoice;
		cout << endl;

		pastaArray[i].setveggiesChoice(veggiesChoice);

		cout << "Would you like protien in your pasta?(Y/N): ";
		cin >> protienChoice;
		cout << endl;

		pastaArray[i].setprotienChoice(protienChoice);

		//cout << "How many people is this pasta meant to serve?: ";
		//cin >> servePeopleAmount;
		//cout << endl;

		//pastaArray[i].setservePeopleAmount(servePeopleAmount);
	}
}

void View_Function()
{
	for (int i = 0; i < countHolder; i++)
	{
		PastaOrder displayArray = pastaArray[i];

		cout << "Whats in your Pasta #" << i + 1 << ":" << endl;

		cout << "Type of Pasta: " << displayArray.getpastaChoice() << endl;
		cout << "Type of Sauce: " << displayArray.getsauceChoice() << endl;
		//cout << "Number of Servings: " << displayArray.getservePeopleAmount() << endl;

		if (displayArray.getveggiesChoice() == 'Y' || displayArray.getveggiesChoice() == 'y')
		{
			cout << "Veggies: Yes" << endl;
		}
		else if (displayArray.getveggiesChoice() == 'N' || displayArray.getveggiesChoice() == 'n')
		{
			cout << "Veggies: No" << endl;
		}
		
		if (displayArray.getprotienChoice() == 'Y' || displayArray.getprotienChoice() == 'y') 
		{
			cout << "Protien: Yes" << endl;
		}
		else if (displayArray.getprotienChoice() == 'N' || displayArray.getprotienChoice() == 'n')
		{
			cout << "Protien: No" << endl;
		}
		cout << endl;
	}
}

enum MainMenu
{
	Welcome_Screen,
	Create_Order,
	View_Order,
	About_Us,
	Quit
};

int main()
{
	MainMenu userOption = MainMenu::Welcome_Screen;
	int input = 0;

	while (userOption == Welcome_Screen)
	{
		//Welcome Screen
		system("CLS");
		cout << "Welcome to Ishan's Pasta Parlour." << endl;
		cout << "1) Create Pasta Order." << endl;
		cout << "2) View Pasta Order." << endl;
		cout << "3) About Us." << endl;
		cout << "4) Quit." << endl;
		cin >> input;

		if (input == Create_Order)
		{
			//Create Order
			system("CLS");
			Order_Function();
			system("PAUSE");
			userOption = Welcome_Screen;
		}
		else if (input == View_Order)
		{
			//View Order
			system("CLS");
			View_Function();
			system("PAUSE");
			userOption = Welcome_Screen;
		}
		else if (input == About_Us)
		{
			//About US
			system("CLS");
			cout << "About Us:" << endl;
			cout << "Ishan's Pasta Parlour." << endl;
			cout << "Serving the best Freakin Pasta in all of nowhere, Since never." << endl << endl;

			cout << "Program By: Ishan Chaurasia, 101011068." << endl;
			system("PAUSE");
		}
		else if (input == Quit)
		{
			system("CLS");
			cout << "Thank you, for visiting Ishan's Pasta Parlour.\nHope to see you again.\nEnd Order.\n";
			system("PAUSE");
			return 0;
		}
	}
}
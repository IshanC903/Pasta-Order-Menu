#pragma once

#include <iostream>
#include <string>
#include <array>

using namespace std;

class PastaOrder
{
private:

	string pastaChoice;
	//int servePeopleAmount;
	string sauceChoice;
	char veggiesChoice;
	char protienChoice;
	int counter;

public:

	string getpastaChoice();
	void setpastaChoice(string pastaChoice);

	//int getservePeopleAmount();
	//void setservePeopleAmount(int servePeopleAmount);

	string getsauceChoice();
	void setsauceChoice(string sauceChoice);

	char getveggiesChoice();
	void setveggiesChoice(char veggiesChoice);

	char getprotienChoice();
	void setprotienChoice(char protienChoice);

};
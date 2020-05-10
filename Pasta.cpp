#include "Pasta.h"

/*
PastaOrder::PastaOrder()
{
	counter = 0;
}

PastaOrder::PastaOrder()
{
	//Deconstructor
}
*/

string PastaOrder::getpastaChoice()
{
	return pastaChoice;
}

void PastaOrder::setpastaChoice(string pastaChoice) 
{
	this->pastaChoice = pastaChoice;
}

//int PastaOrder::getservePeopleAmount()
//{
//	return servePeopleAmount;
//}

//void PastaOrder::setservePeopleAmount(int servePoepleAmount)
//{
//	this->servePeopleAmount = servePeopleAmount;
//}

string PastaOrder::getsauceChoice()
{
	return sauceChoice;
}

void PastaOrder::setsauceChoice(string sauceChoice)
{
	this->sauceChoice = sauceChoice;
}

char PastaOrder::getveggiesChoice()
{
	return veggiesChoice;
}

void PastaOrder::setveggiesChoice(char veggiesChoice)
{
	this->veggiesChoice = veggiesChoice;
}

char PastaOrder::getprotienChoice()
{
	return protienChoice;
}

void PastaOrder::setprotienChoice(char protienChoice)
{
	this->protienChoice = protienChoice;
}
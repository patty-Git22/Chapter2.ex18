/*
Title: Chapter 2 exercise 18 - Energy Drink Consumption
File name: Chapter2.ex18.cpp
Programmer: Patrick Maloon
Date:9/23/24

Create a C++ program that does the folowing:
A soft drink company recently surveyed 16,500 of its customers
and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week.
Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks.
Write a program that displays the following:
The approximate number of customers in the survey who purchase one or more energy drinks per week.
The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so
that the user can enter the number of the number of customers that were surveyed

*/

#include <iostream>
using namespace std;

int main()
{
	int Customers = 16500;
	int BuyEnergyDrinks = Customers * .15;
	int Citrus = BuyEnergyDrinks * .58;
	cout << "Out of a 16,500 customer survey preformed by a energy drink company," << endl;
	cout << "approximately " << BuyEnergyDrinks << " customers in the survey purchase one or more energy drinks per week.\n\n";
	cout << "Of those who purchased one or more energy drinks per week, \napproximately " << Citrus << " prefered citrus flavored energy drinks." << endl;

	return 0;
}
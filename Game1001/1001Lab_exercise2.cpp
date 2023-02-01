/**************************************************************************
Author: Siyu Yang 101460890
Date:2023-01-31
Description: Lab execrise2
**************************************************************************/
#include<iostream>
using namespace std;

int main() {
	signed int insCost = 75, minCharge = 120, hourCharge = 75;
	
	int time = 0;
	
	long int partsCost = 0 , totalCost = 0;
	

	cout << "please enter hours worked" << endl;
	
	cin >> time;
	
	cout << "please enter parts cost" << endl;

	cin >> partsCost;
	
	if (time > 0)
	{
		
		if (partsCost == 0)
		{
			totalCost = minCharge + (hourCharge * time);
		}
		else if (partsCost > 0)
		{
			totalCost = minCharge + partsCost + (hourCharge * time);
		}
		else
		{
			cout << "number is illegal, Please try again." << endl;
			return 0;
		}
	}
	else if(time == 0)
	{
		totalCost = insCost;
	}
	else
	{
		cout << "number entered is illegal, Please try again." << endl;
		return 0;
	}
	cout << "Total cost: $" << totalCost << endl;
	cout << "Hours worked: " << time << endl;
	cout << "Parts cost: $" << partsCost << endl;
	system("pause");
		return 0;
}
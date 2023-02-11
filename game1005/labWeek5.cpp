#include <iostream>
using namespace std;

int main() {
	
	int waterTaken,daysCount = 1;
	
	int totalWater;
	cout << "please enter total water remained" << endl;
	cin >> totalWater;

	int percentage;
	cout << "please enter daily percentage of water taken" << endl;
	cin >> percentage;

	cout
		<< "Day\t\tAmount Taken\t\tAmount remaining" << endl;

	while (daysCount < 31 && totalWater > 100)
	{
		waterTaken = totalWater * (percentage * 0.01);
		totalWater -= waterTaken;
		
		if (totalWater < 100)
		{
			cout << "***************water shortage******************" << endl;
		}

		cout
			<< daysCount << "\t\t" << waterTaken << "\t\t" << totalWater << endl;
		daysCount++;
	}
	system("pause");
	return 0;
}
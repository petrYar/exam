#include <iostream>
using namespace std;
int main()
{
	int heigth;
	bool twoSides = false;

	do
	{
		cout << "Enter heigth\n";
		cin >> heigth;
	} while (heigth <= 0);
	do
	{
		cout << "Two sides? 1 - true 0 - false\n";
		cin >> twoSides;
	} while (twoSides < 0 || twoSides > 1);

	system("pause");
	return 0;
}
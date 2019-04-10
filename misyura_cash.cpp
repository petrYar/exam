#include <iostream>
using namespace std;
bool TakeNumber(int number);
bool IsValid(int number);
int ConvertToCoins(double number);
int main()
{
	float number;
	while (true)
	{
		cout << "Enter number\n";
		cin >> number;
		if (!TakeNumber(number))
			continue;
		break;
	}

	int coins = ConvertToCoins(number);

	system("pause");
	return 0;
}

bool TakeNumber(int number)
{
	return IsValid(number);
}

bool IsValid(int number)
{
	if (!cin)
	{
		cin.clear();
		cout << "You entered incorrect symbol or number\n";
		while (cin.get() != '\n')
			continue;
		return false;
	}
	return true;
}

int ConvertToCoins(double number)
{
	int coins;

	cout << "number " << number << endl;\

	if (number >= 0)
		coins = number * 100;

	cout << "coins " << coins << endl;

	return coins;
}

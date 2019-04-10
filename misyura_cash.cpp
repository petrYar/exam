#include <iostream>
using namespace std;

struct Nominals
{
	int c25 = 0;
	int c10 = 0;
	int c5 = 0;
	int c1 = 0;
};

bool TakeNumber(int number);
bool IsValid(int number);
int ConvertToCoins(double number);
void ShowTrifle(int coins, Nominals &nominals);

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

	Nominals nominals;
	ShowTrifle(coins, nominals);

	cout << "Coins with 25 nominal: " << nominals.c25 << endl;
	cout << "Coins with 10 nominal: " << nominals.c10 << endl;
	cout << "Coins with 5 nominal: " << nominals.c5 << endl;
	cout << "Coins with 1 nominal: " << nominals.c1 << endl;

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

void ShowTrifle(int coins, Nominals &nominals)
{
	while (coins >= 25)
	{
		coins -= 25;
		nominals.c25++;
	}
	while (coins >= 10)
	{
		coins -= 10;
		nominals.c10++;
	}
	while (coins >= 5)
	{
		coins -= 5;
		nominals.c5++;
	}
	while (coins >= 1)
	{
		coins -= 1;
		nominals.c1++;
	}
}

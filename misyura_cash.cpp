#include <iostream>
using namespace std;
bool TakeNumber(int number);
bool IsValid(int number);
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
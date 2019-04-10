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
	cout << "correct\n";
	system("pause");
	return 0;
}

bool TakeNumber(int number)
{
	return IsValid(number);
}
#include <iostream>
using namespace std;
int main()
{
	int heigth;

	do
	{
		cout << "Enter heigth\n";
		cin >> heigth;
	} while (heigth <= 0);

	system("pause");
	return 0;
}
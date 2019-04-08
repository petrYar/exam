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

	int space = heigth;
	if (twoSides == false)
	{
		int a = 1;
		for (int i = 0; i < heigth; i++)
		{
			int b = a;
			int space2 = space;
			do
			{
				cout << " ";
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";
				b--;
			} while (b > 0);
			cout << endl;
			a++;
			space--;
		}
	}
	else if (twoSides == true)
	{
		int a = 1;
		for (int i = 0; i < heigth; i++)
		{
			int b = a;
			int space2 = space;
			do
			{
				cout << " ";
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";
				b--;
			} while (b > 0);
			cout << " ";
			b = a;
			do
			{
				cout << "#";
				b--;
			} while (b > 0);

			cout << endl;
			a++;
			space--;
		}
	}

	system("pause");
	return 0;
}
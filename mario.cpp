#include <iostream>
using namespace std;
int main()
{
	int heigth;
	int twoSides;
	do
	{
		cout << "Enter heigth\n";
		cin >> heigth;//ввод висоти
		if (heigth == 0)// проверка ввели ли букву
		{
			cin.clear();//очистка буфера
			cin.ignore(999, '\n');// игнорирование информации в буфере
		}
	} while (heigth <= 0);
	do
	{
		cout << "Two sides? 2 - true 1 - false\n";
		cin >> twoSides;// ввод варианта вивода
		if (twoSides == 0)
		{
			cin.clear();
			cin.ignore(999, '\n');
		}
	} while (twoSides > 2 || twoSides < 1);


	char space = heigth; // пробели = висоте

	if (twoSides == 1)
	{
		int a = 1;
		for (int i = 0; i < heigth; i++)// работать пока І не есть равно или больше чем висота
		{
			int b = a;// б = 1
			char space2 = space;// спейс2 = висота
			do
			{
				cout << " ";// вивести пробел и уменьшить спейс2 пока не будет 0
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";// виводить решетки по б != 0
				b--;
			} while (b > 0);
			cout << endl;// следующий рядок
			a++;// увеличить кол-во решеток
			space--;// уменьшить кол-во пробелов
		}
	}

	else if (twoSides == 2)
	{
		int a = 1;
		for (int i = 0; i < heigth; i++)
		{
			int b = a;
			char space2 = space;
			do
			{
				cout << " ";// вивести пробел и уменьшить спейс2 пока не будет 0
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";// виводить решетки по б != 0
				b--;
			} while (b > 0);
			cout << " ";// сделать пробел между пирамидками
			b = a; // б снова есть а (било 0)
			do
			{
				cout << "#";// вивод 2 пирамидки
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
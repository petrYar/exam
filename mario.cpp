#include <iostream>
using namespace std;
int main()
{
	int heigth;
	int twoSides;
	do
	{
		cout << "Enter heigth\n";
		cin >> heigth;//���� ������
		if (heigth == 0)// �������� ����� �� �����
		{
			cin.clear();//������� ������
			cin.ignore(999, '\n');// ������������� ���������� � ������
		}
	} while (heigth <= 0);
	do
	{
		cout << "Two sides? 2 - true 1 - false\n";
		cin >> twoSides;// ���� �������� ������
		if (twoSides == 0)
		{
			cin.clear();
			cin.ignore(999, '\n');
		}
	} while (twoSides > 2 || twoSides < 1);


	char space = heigth; // ������� = ������

	if (twoSides == 1)
	{
		int a = 1;
		for (int i = 0; i < heigth; i++)// �������� ���� � �� ���� ����� ��� ������ ��� ������
		{
			int b = a;// � = 1
			char space2 = space;// �����2 = ������
			do
			{
				cout << " ";// ������� ������ � ��������� �����2 ���� �� ����� 0
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";// �������� ������� �� � != 0
				b--;
			} while (b > 0);
			cout << endl;// ��������� �����
			a++;// ��������� ���-�� �������
			space--;// ��������� ���-�� ��������
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
				cout << " ";// ������� ������ � ��������� �����2 ���� �� ����� 0
				space2--;
			} while (space2 > 0);
			do
			{
				cout << "#";// �������� ������� �� � != 0
				b--;
			} while (b > 0);
			cout << " ";// ������� ������ ����� �����������
			b = a; // � ����� ���� � (���� 0)
			do
			{
				cout << "#";// ����� 2 ���������
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
#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int n = 0;
start:
	cout << "������� ����� ������� (�1 ��� �2):" << endl;
	cin >> n;

	if (n == 1)
	{
		cout << "1.���������� ������������� ������ ��� ����� ������� � ������� ����������� ���� ������� �������������� ���� ��������� ������ ����; ����� - ���� ������ �����. ��������� ����� ������� �� ����������� � ����������� � �������� �������." << endl;

		const int n = 50;
		int a[n];
		double average = 0;
		int temp = 0;
		int sum = 0;
		int size = 0;

		cout << "������� ������ ������� (������� 50 ���������): ";
		cin >> size;

		int part = (size * 2) / 3;
		int part1 = (size / 3);

		for (int i = 0; i < size; i++)
		{
			a[i] = -30 + rand() % 50;
			cout << a[i] << " ";
		}
		cout << endl;

		for (int i = 0; i < size; i++)
		{
			sum += a[i];
			average = (double)sum / size;
		}
		cout << "������� �������������� ���� ��������� = " << average;
		cout << endl;

		if (average > 0)
		{
			for (int pass = 0; pass < part - 1; pass++)
			{
				for (int i = 0; i < part - 1; i++)
				{
					if (a[i] > a[i + 1])
					{
						swap(a[i], a[i + 1]);
					}
				}
			}
			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}
		else if (average < 0)
		{
			for (int pass = 0; pass < part1 - 1; pass++)
			{
				for (int i = 0; i < part1 - 1; i++)
				{
					if (a[i] > a[i + 1])
					{
						swap(a[i], a[i + 1]);
					}

				}

			}

			for (int i = part1; i < size/2; i++)
			{
				swap(a[i], a[size-i+1]);
			}


			for (int i = 0; i < size; i++)
			{
				cout << a[i] << " ";
			}
			cout << endl;
		}



	}


	else if (n == 2)
	{
		cout << "����������� ���������� �������." << endl;

		const int n = 8;
		int a[n] = { 5,8,9,10,4,25,6,26 };
		int k = 0;
		int x = 0;

		for (int i = 0; i < n; i++)
		{
			k = i;
			x = a[i];
			for (int j = i + 1; j < n; j++)
			{
				if (a[j] < x)
				{
					k = j;
					x = a[j];
				}
			}
			a[k] = a[i];
			a[i] = x;
		}
		for (int i = 0; i < n; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;

	}
	goto start;

}
#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "Реализовать Сортировку выбором." << endl;

	const int n = 8;
	int a[n] = { 5,8,9,10,4,25,6,26 };
	int k = 0;
	int x = 0;

	for (int i = 0; i < n; i++)
	{
		k = i;
		x = a[i];
		for (int j = i+1; j < n; j++)
		{
			if (a[j]<x)
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
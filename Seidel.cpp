#include <iostream>

using namespace std;
double a[3][4], itog[3] = { 0 };
void print()
{
	cout << "Print array:\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
}
void init_matrix(double a[3][4])
{
	a[0][0] = 5; a[0][1] = 4; a[0][2] = 21; a[0][3] = 3;
	a[1][0] = 4; a[1][1] = 5; a[1][2] = 6; a[1][3] = 8;
	a[2][0] = 10; a[2][1] = 11; a[2][2] = 0; a[2][3] = 4;

}
void swap(int m, int k)
{
	double temp;
	for (int i = 0; i < 3; i++)
	{
		temp = a[k][i];
		a[k][i] = a[m][i];
		a[m][i] = temp;
	}
}
int check(int l)
{
	for (int i = l; i < 3; i++)
	{
		for (int j = i + 1; j < 4; j++)
		{
			if (abs(a[i][l]) < abs(a[j][l]))
				swap(i, j);
		}
	}
	l++;
	print();
	if (l < 3)
		check(l);
	return 0;
}
int preclaculate()
{
	for (int i = 0; i < 3; i++)
	{
		double temp = a[i][i];
		for (int j = 0; j < 4; j++)
		{
			a[i][j] = a[i][j] / temp;

		}

	}
	return 0;
}
int calculate(int k)
{
	double temp[3] = { 0 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i != j)
			{
				temp[i] += a[i][j] * itog[j];
			}
			if (j == 2)
			{
				itog[i] = (a[i][3] - temp[i]) / a[i][i];
			}
		}
		cout << " i = " << k << "; x" << i << " = " << itog[i] << endl;
	}
	return 0;
}
int main()
{
	init_matrix(a);
	print();
	check(0);
	preclaculate();
	print();
	for (int i = 1; i <= 3; i++)
		calculate(i);
	system("pause");
	return 0;
}
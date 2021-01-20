#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;

#define N 10

int main(void)
{
	int a[N][N] = { 0 };
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			if (j == 0 || i == j)
			{
				a[i][j] = 1;
			}
			else
			{
				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
			}
		}
	}

	for (int i = 0; i < N; i++)
	{
		cout << setw((N - i) * 4) << a[i][0];

		for (int j = 1; j <= i; j++)
		{
			cout << setw(8) << a[i][j];
		}
		cout << endl;
	}

	system("pause");

	return 0;
}
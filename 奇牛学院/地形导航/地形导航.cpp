#include <iostream>
#include <fstream>
#include <string>
#include <assert.h>

using namespace std;

#define N 64
bool isPeek(int map[][N], int r, int c);
bool isGalley(int map[][N], int r, int c);
void extreme(int map[][N], int rows, int cols);

int main(void)
{
	int nrows, ncols;
	int map[N][N];
	int peekTotal = 0;
	string filename;
	ifstream file;

	cout << "�������ļ�����\n";
	cin >> filename;

	file.open(filename.c_str());

	if (file.fail())
	{
		cout << "���ļ�����" << endl;
		exit(1);
	}

	file >> nrows >> ncols;

	if (nrows >= N && ncols >= N)
	{
		cout << "�ļ�����̫�󣬳������巶Χ��" << endl;
		exit(1);
	}

	for (int i = 0; i < nrows; i++)
	{
		for (int j = 0; j < ncols; j++)
		{
			file >> map[i][j];
		}
	}

	//isPeek(map, -1, 2);
	for (int i = 1; i < nrows - 1; i++)
	{
		for (int j = 1; j < ncols - 1; j++)
		{
			if (isPeek(map, i, j))
			{
				cout << "������λ�ã��� " << i + 1 << ", �� " << j + 1 << endl;
				peekTotal++;
			}

			if (isGalley(map, i, j))
			{
				cout << "��ȳ���λ�ã��� " << i + 1 << ", �� " << j + 1 << endl;
			}
		}
	}

	cout << "---------------------------" << endl;
	extreme(map, nrows, ncols);
	file.close();
	cout << "����ܹ��� " << peekTotal << " ��" << endl;
	return 0;
}


bool isPeek(int map[][N], int r, int c)
{
	assert(r > 0 && r < N - 1);
	assert(c > 0 && c < N - 1);
	if ((map[r][c] >= map[r - 1][c]) && (map[r][c] >= map[r - 1][c - 1]) && (map[r][c] >= map[r - 1][c + 1]) &&
		(map[r][c] >= map[r + 1][c]) && (map[r][c] >= map[r + 1][c - 1]) && (map[r][c] >= map[r - 1][c + 1]) &&
		(map[r][c] >= map[r][c - 1]) &&
		(map[r][c] >= map[r][c + 1]))
	{
		return true;
	}

	return false;
}

bool isGalley(int map[][N], int r, int c)
{
	assert(r > 0 && r < N - 1);
	assert(c > 0 && c < N - 1);
	if ((map[r][c] <= map[r - 1][c]) &&
		(map[r][c] <= map[r + 1][c]) &&
		(map[r][c] <= map[r][c - 1]) &&
		(map[r][c] <= map[r][c + 1]))
	{
		return true;
	}

	return false;
}

void extreme(int map[][N], int rows, int cols)
{
	int maxData = map[0][0], minData = map[0][0];
	int maxDataI = 0, maxDataJ = 0;
	int minDataI = 0, minDataJ = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (map[i][j] > maxData)
			{
				maxData = map[i][j];
				maxDataI = i;
				maxDataJ = j;
			}

			if (map[i][j] < minData)
			{
				minData = map[i][j];
				minDataI = i;
				minDataJ = j;
			}
		}
	}

	cout << "���ֵ�� " << maxData << " ,λ�ڣ��� " << maxDataI + 1 << ", �� " << maxDataJ + 1;
	cout << "��Сֵ�� " << minData << " ,λ�ڣ��� " << minDataI + 1 << ", �� " << minDataJ + 1;
}
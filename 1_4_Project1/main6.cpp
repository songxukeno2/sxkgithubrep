#include <iostream>
#include <Windows.h>
using namespace std;
int main61(void)
{
	int x;
	x = 3.14 * 10.0;

	cout << x << endl;
	
	system("pause");
	return 0;
}

int main62(void)
{
	printf("%c\n", 255 + 50);
	printf("%d\n", 255 + 50);

	int x = 257 + 100;
	cout << "x = " << x << endl;

	x = (char)257 + 100;
	cout << "x = " << x << endl;
	return 0;
}
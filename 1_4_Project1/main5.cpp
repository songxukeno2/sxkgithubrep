#include <iostream>
#include <Windows.h>

using namespace std;

int main51(void)
{
	int salary;

	printf("������������н��");

	scanf_s("%d", &salary);

	cout << (salary > 30000 ? "����" : "����") << "�����Ϻ�" << endl;

	system("pause");

	return 0;
}
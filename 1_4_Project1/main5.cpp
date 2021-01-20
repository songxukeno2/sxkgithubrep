#include <iostream>
#include <Windows.h>

using namespace std;

int main51(void)
{
	int salary;

	printf("请输入您的月薪：");

	scanf_s("%d", &salary);

	cout << (salary > 30000 ? "老鸟" : "菜鸟") << "，晚上好" << endl;

	system("pause");

	return 0;
}
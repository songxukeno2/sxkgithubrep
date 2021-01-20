#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main31()
{
	int weight;
	printf("美女，你多重啊？\n");
	cin >> weight;

	if (weight >= 120)
	{
		printf("美女，如此丰满，真有福气啊！\n");
	}
	else
	{
		cout << "美女，这么瘦， 身材不错啊！" << endl;
	}
	system("pause");
	return 0;
}

int main32()
{
	int money;
	int days;

	cout << "你有多少钱？";
	cin >> money;

	cout << "你有多少天假期？";
	cin >> days;

	if (money >= 100000 && days >= 10)
	{
		cout << "我要去旅游！" << endl;
	}
	else
	{
		cout << "还是在家里呆着" << endl;
	}

	system("pause");
	return 0;
}

int main33(void)
{
	int money;
	string love;

	cout << "你有多少钱？" << endl;
	cin >> money;

	cout << "你爱我吗？" << endl;
	cin >> love;

	if (money >= 100000 && love == "爱")
	{
		cout << "我们结婚吧！" << endl;
	}
	else
	{
		cout << "你是一个好人！" << endl;
	}

	system("pause");
	return 0;
}

int main34(void)
{
	int money;
	int days;

	cout << "你的月薪多少？";
	cin >> money;

	if (!(money >= 30000))
	{
		cout << "我是菜鸟，月薪不到30000，需要努力修炼\n" << endl;
	}
	else
	{
		cout << "我要接外包\n" << endl;
	}

	system("pause");
	return 0;
}
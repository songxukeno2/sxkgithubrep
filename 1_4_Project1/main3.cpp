#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main31()
{
	int weight;
	printf("��Ů������ذ���\n");
	cin >> weight;

	if (weight >= 120)
	{
		printf("��Ů����˷��������и�������\n");
	}
	else
	{
		cout << "��Ů����ô�ݣ� ��Ĳ�����" << endl;
	}
	system("pause");
	return 0;
}

int main32()
{
	int money;
	int days;

	cout << "���ж���Ǯ��";
	cin >> money;

	cout << "���ж�������ڣ�";
	cin >> days;

	if (money >= 100000 && days >= 10)
	{
		cout << "��Ҫȥ���Σ�" << endl;
	}
	else
	{
		cout << "�����ڼ������" << endl;
	}

	system("pause");
	return 0;
}

int main33(void)
{
	int money;
	string love;

	cout << "���ж���Ǯ��" << endl;
	cin >> money;

	cout << "�㰮����" << endl;
	cin >> love;

	if (money >= 100000 && love == "��")
	{
		cout << "���ǽ��ɣ�" << endl;
	}
	else
	{
		cout << "����һ�����ˣ�" << endl;
	}

	system("pause");
	return 0;
}

int main34(void)
{
	int money;
	int days;

	cout << "�����н���٣�";
	cin >> money;

	if (!(money >= 30000))
	{
		cout << "���ǲ�����н����30000����ҪŬ������\n" << endl;
	}
	else
	{
		cout << "��Ҫ�����\n" << endl;
	}

	system("pause");
	return 0;
}
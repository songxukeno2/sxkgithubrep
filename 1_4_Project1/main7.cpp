#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main71(void)
{
	char c;
	cout << "������һ���ַ���" << endl;
	cin >> c;

	if (c >= 'a' && c <= 'z')
	{
		c = c - 'a' + 'A';
	}
	else if (c >= 'A' && c <= 'Z')
	{
		c = c - 'A' + 'a';
	}

	cout << c << endl;
	system("pause");
	return 0;
}

int main72(void)
{
	int num;
	string ret;
	cout << "������һ������[0-9]:";
	cin >> num;
	switch (num)
	{
	case 0:
		cout << "��" << endl;
		break;
	case 1:
		cout << "Ҽ" << endl;
		break;
	case 2:
		cout << "��" << endl;
		break;
	case 3:
		cout << "��" << endl;
		break;
	case 4:
		cout << "��" << endl;
		break;
	case 5:
		cout << "��" << endl;
		break;
	case 6:
		cout << "½" << endl;
		break;
	case 7:
		cout << "��" << endl;
		break;
	case 8:
		cout << "��" << endl;
		break;
	case 9:
		cout << "��" << endl;
		break;
	default:
		cout << "û��ƥ��ĺ���" << endl;
		break;
	}

	system("pause");
	return 0;
}

int main(void)
{
	int num;
	string ret[10] = { "��", "Ҽ", "��", "��", "��", "��", "½", "��", "��", "��" };

	cout << "������һ������[0-9]:";
	cin >> num;

	if (num >= 0 && num <= 9)
	{
		cout << ret[num] << endl;
	}
	system("pause");
	return 0;
}
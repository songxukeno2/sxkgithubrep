#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main71(void)
{
	char c;
	cout << "ÇëÊäÈëÒ»¸ö×Ö·û£º" << endl;
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
	cout << "ÇëÊäÈëÒ»¸öÊý×Ö[0-9]:";
	cin >> num;
	switch (num)
	{
	case 0:
		cout << "Áã" << endl;
		break;
	case 1:
		cout << "Ò¼" << endl;
		break;
	case 2:
		cout << "·¡" << endl;
		break;
	case 3:
		cout << "Èþ" << endl;
		break;
	case 4:
		cout << "ËÁ" << endl;
		break;
	case 5:
		cout << "Îé" << endl;
		break;
	case 6:
		cout << "Â½" << endl;
		break;
	case 7:
		cout << "Æâ" << endl;
		break;
	case 8:
		cout << "°Æ" << endl;
		break;
	case 9:
		cout << "¾Á" << endl;
		break;
	default:
		cout << "Ã»ÓÐÆ¥ÅäµÄºº×Ö" << endl;
		break;
	}

	system("pause");
	return 0;
}

int main(void)
{
	int num;
	string ret[10] = { "Áã", "Ò¼", "·¡", "Èþ", "ËÁ", "Îé", "Â½", "Æâ", "°Æ", "¾Á" };

	cout << "ÇëÊäÈëÒ»¸öÊý×Ö[0-9]:";
	cin >> num;

	if (num >= 0 && num <= 9)
	{
		cout << ret[num] << endl;
	}
	system("pause");
	return 0;
}
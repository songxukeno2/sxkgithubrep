#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int main11(void)
{
	string pwd;
	while (1)
	{
		cout << "Please Input your Password: ";
		cin >> pwd;

		if (pwd == "000123")
		{
			break;
		}
		else
		{
			cout << "Password Error ..." << endl;
		}
	}

	cout << "Login Success ..." << endl;
	cout << "1. ע��" << endl; 
	cout << "2. ����" << endl; 
	cout << "3. ��ѯ" << endl; 
	cout << "4. ɾ��" << endl; 
	system("pause");
	return 0;
}

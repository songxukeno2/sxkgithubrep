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
	cout << "1. ×¢²á" << endl; 
	cout << "2. ¹ÜÀí" << endl; 
	cout << "3. ²éÑ¯" << endl; 
	cout << "4. É¾³ý" << endl; 
	system("pause");
	return 0;
}

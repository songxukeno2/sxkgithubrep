#include <iostream>
#include <string>

using namespace std;

int main11(void)
{
	string name;
	string pwd;
	cout << "ÇëÊäÈëÕËºÅ£»";
	cin >> name;

	cout << "ÇëÊäÈëÃÜÂë£º";
	cin >> pwd;

	if (name == "54hk" && pwd == "123456")
	{
		cout << "1" << endl;
		cout << "2" << endl;
		cout << "3" << endl;
		cout << "4" << endl;
	}
	else
	{
		cout << "ÓÃ»§ÊäÈë´íÎó1" << endl;
	}

	system("pause");
	return 0;
}
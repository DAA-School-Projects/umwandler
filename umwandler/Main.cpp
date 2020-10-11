#include <iostream>
#include <windows.h>
#include <Lmcons.h>

using namespace std;
int main()
{

	TCHAR name[UNLEN + 1];
	DWORD size = UNLEN + 1;

	cout << "===========================\n";
	if (GetUserName((TCHAR*)name, &size))
		wcout << L"Hello, " << name << L"!\n";
	else
		cout << "Hello, Ubbekanter Person!\n";
	cout << "===========================\n";
	cout << "\n";

	double tempc;
	double tempf;
	char re;
	int var;
	
	cout << "what do u ant to calulate?\n";
	cout << "1:Celsius to fahrenheit\n";
	cout << "2:fahrenheit to Celsius\n";
	cin >> var;
	while (var > 2)
	{
		cout << "bitch i said pick between 1 and 2 god damn u stupid?\n";
		cin >> var;
	}

	if (cin.fail())
	{
		cout << "you dump bich? I SAID 1 OR 2!\n";
	}
	
	if (var == 1)
	{

		cout << "type the temp in in C \n";
		cout << "\n";

		cin >> tempc;
		cout << "\n";

		cout << "you imputed " << tempc << "C \n";
		cout << "\n";

		cout << "the answer in Fahrenheit = " << tempc * 1.8 + 32 << "F\n";

	}
	else if (var == 2)
	{
		cout << "type the temp in F \n";
		cout << "\n";

		cin >> tempf;
		cout << "\n";

		cout << "you imputed " << tempf << "F \n";
		cout << "\n";

		cout << "the answer in Celsius = " << (tempf  - 32) / 1.8 << "F\n";
	}

	cout << "\n";
	cout << "do you want to calculate again?\n";
	cout << "y for Yes\n";
	cout << "n for No\n";

	cin >> re;

	system("CLS");

	if (re == 'y')
	{
		return main();

	}
	else if (re == 'n')
	{
		cout << "ok then have a nice day\n";
	} 
	else if (cin.fail())
	{
		cout << "bitch wtf get out of here i dont have time for this shit\n";
	}

	system("Pause");
	return 0;

}
#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char c;
	char a[500];
	cout << "Введите строку: ";
	gets_s(a);
	cin >> c;
	for (int i = 0; a[i] != 0; i++)
	{
		if (a[i] == c)
			cout << a[i] << a[i];
		else
			cout << a[i];
	}
	return 0;
}
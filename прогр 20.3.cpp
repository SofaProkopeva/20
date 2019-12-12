#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 0;
	char a[500];
	cout << "Введите строку: ";
	gets_s(a);
	for (int i = 0; a[i] != 0; i++)
	{
		if (isupper(a[i]))
			k++;
	}
	cout << k;
	return 0;
}
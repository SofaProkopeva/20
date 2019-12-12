#include <iostream>
#include <string>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char s0[500];
	cout << "Введите строку: ";
	gets_s(s0);
	char s[500];
	cout << "Введите строку: ";
	gets_s(s);
	int k = 0;
	for (int i = 0; s[i] != 0; i++)
	{
		for (int j = 0; s0[j] != 0; j++)
		{
			if (s[i] == s[j] && s[i + 1] == s[j + 1] && s[i] != ' ')
				k++;
		}
	}
	cout << k;
	return 0;
}
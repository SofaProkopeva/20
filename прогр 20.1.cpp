#include <iostream>
#include <string>
using namespace std;

int main()
{
	char C;
	cin >> C;
	cout << char(C - 1) << " " << char(C + 1);
	return 0;
}
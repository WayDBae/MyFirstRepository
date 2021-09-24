#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	cout << "Введите цифры:" << endl;
	cin >> a;
	cout << "В бинарном виде:\t" << bitset<16>(a) << "\n" << endl;
	cout << "В шестнадцатеричном виде:\t" << hex << a << endl;
	return 0;
}
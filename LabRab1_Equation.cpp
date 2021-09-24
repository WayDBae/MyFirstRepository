#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a, b;
    double xx;
    cout << "Задайте a и b:\n";
    cin >> a >> b;
    xx = (b * 1.0) / (a * 1.0);
    cout << "x value: " << xx << '\n';

    return 0;
}
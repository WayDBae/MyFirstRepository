#include <iostream>

using namespace std;

int main()
{
    int a, b; //мучался с этим, потому что в начале вводил "int a, b, x;", не зная что при "double x;" икс в int не пишется.
    double x;
    cin >>a >> b;
    x=(a+b)/2; //формула для нахождения середины отрезка
    cout << x; //вывод ответа
    return 0;
}


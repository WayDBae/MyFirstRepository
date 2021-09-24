#include <iostream>
#include "limits.h"
using namespace std;

int main()
//sizeof(int) - вывод размера типов данных
//min int - минимальное значение встроенных типов данных
//max int - максимальное значение встроенных типов данных

{
    cout << "Int \t " << sizeof(int) << "\t" 
        << "min int \t" << INT_MIN << "\t" 
        << "max int \t" << INT_MAX << endl; 
    
    cout << "Int \t " << sizeof(int) << "\t" 
        << "min unsigned int \t" << unsigned int(0b100000000000000000000000000000000) << "\t"
        << "max usigned int \t" << UINT_MAX << endl;
    
    cout << "Int \t " << sizeof(short) << "\t" 
        << "min short \t" << SHRT_MIN << "\t" 
        << "max short \t" << SHRT_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t" 
        << "min unsigned short \t" << unsigned short int(0b10000000000000000000000000000000) << "\t"
        << "max usigned short \t" << USHRT_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t" 
        << "min long \t" << LONG_MIN << "\t" 
        << "max long \t" << LONG_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t" 
        << "min long long \t" << LLONG_MIN << "\t"
        << "max long long \t" << LLONG_MAX << endl;

    cout << "Int \t " << sizeof(int) << "\t"
    << "min double \t" << DBL_MIN << "\t"
    << "max double \t" << DBL_MAX << endl;

    cout << "Int \t " << sizeof(char) << "\t"
        << "min char \t" << CHAR_MIN << "\t"
        << "max char \t" << CHAR_MAX << endl;

    cout << "Int \t " << sizeof(bool) << "\t"
        << "min bool \t" << bool(0b1) << "\t" 
        << "max bool \t" << bool(0b0) << endl;

    return 0;
}
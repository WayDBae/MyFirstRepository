#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

template< class T >
void sort(T* arr, int size)
{
    T tmp;
    for (int i = 0; i < size - 1; ++i) // i - номер прохода
    {
        for (int j = 0; j < size - 1; ++j) // внутренний цикл прохода
        {
            if (arr[j + 1] < arr[j])
            {
                tmp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}
void task1() {
    int size;
    short q;
    cout << "Ну-ка, и какого размера массив я буду обрабатывать?";
    cin >> size;
    if (size > 1000) {
        cout << "Error" << endl;
    }
    cout << "Ясненько..." << endl;
    int* array = new int[size];
    cout << "Ну а как заполнять будем?" << endl << "1 - Рандомно" << endl << "2 - Ручками" << endl;
    cin >> q;
    if (q == 1)
    {
        cout << "Ленивый..." << endl;
        for (int i = 0; i < size; i++)
            array[i] = rand() % 1000 - 1;
    }
    else if (q == 2)
    {
        cout << "Ну попробуй))" << endl;
        for (int i = 0; i < size; i++)
            cin >> array[i];
    }
    else
    {
        cout << "_FATAL_ERROR_" << endl;
    }
    cout << endl << "Ну посмотрим, что тут у нас...";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    system("pause");
    system("cls");
    cout << endl << "Поглядел и хватит!" << endl << "А теперь отсортируем этот бардак!!" << endl;
    sort(array, size);
    cout << "Фуух, управился!!!" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << endl;
    }
    system("pause");

}
void task2() {

}
    void task3() {

    }
    int main()
    {
        setlocale(LC_ALL, "rus");
        unsigned short choice;
        cout << "Введите номер задания(1/2/3/0, где 0 это выход): ";
        cin >> choice;
        while (choice != 0) {
            switch (choice)
            {
            case 1:
                task1();
                cout << "Введите номер задания(1/2/3, где 0 это выход): ";
                cin >> choice;
                break;
            case 2:
                task2();
                cout << "Введите номер задания(1/2/3, где 0 это выход): ";
                cin >> choice;
                break;
            case 3:
                task3();
                cout << "Введите номер задания(1/2/3, где 0 это выход): ";
                cin >> choice;
                break;
            case 0:
                break;
            default:
                cout << "Неверное число(\n";
                cout << "Введите номер задания(1/2/3, где 0 это выход): ";
                cin >> choice;
                break;
            }
        }
        return 0;
    }
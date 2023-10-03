// вторая задача 07.09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int first;
    int uvl;
    char math;
    cout << "Введите первое число: ";
    cin >> first;
    cout << "Введите оператор изменения первой переменной: ";
    cin >> math;
    cout << "Введите насколько его изменить: ";
    cin >> uvl;
    int second;
    if (math == '*') {
        second = first * uvl;
    }
    else if (math == ' + ') {
        second = first + uvl;
    }
    else if (math == '-') {
        second = first - uvl;
    }
    else if (math == '/') {
        second = first / uvl;
    }
    int third = first + second;
    cout << "First = " << first << endl;
    cout << "Second = " << second << endl;
    cout << "Third = " << third << endl;
    return 0;
}


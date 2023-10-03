// laba 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS"); //установка русского языка
    const int size = 10;
    int mas[size]; //создание списка
    int sum = 0;
    int min = 1000000;
    cout << "Введите 10 целых чисел: " << endl;
    for (int i = 0; i < size; i++) { //цикл перебора, записываем каждый эллемент в список, добавляем в сумму и проверяем минимальный ли он
        cin >> mas[i];
        sum += mas[i];
        if (mas[i] < min) {
            min = mas[i];
        }
    }
    for (int i = 0; i < size; i++) {
        cout << i+1 << "-ый эллемент: " << mas[i]<< endl;
    }
    cout << "Сумма эллементов массива: " << sum << endl;
    cout << "Минимальный эллемент массива: " << min << endl; //выводим каждый элемент, их сумму, минимальный
    for (int i = 0; i < size - 1; i++) { //сортировка пузырьком, первый цикл для прохода по списку
        for (int j = 0; j < size - i - 1; j++) { //второй цикл для сортировки элементов
            if (mas[j] > mas[j + 1]) { 
                int temp = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = temp; //меняем элементы местами
                }
            }
        }
    for (int i = 0; i < size; i++) {
        cout << i + 1 << "-ый эллемент: " << mas[i] << endl; //вывод отсортированного списка
    }
    return 0;
}


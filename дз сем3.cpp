// дз сем3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <climits>
using namespace std;
int main()
{   
    setlocale(LC_ALL, "RUS");
    int n;
    cout << "Введите длинну массива: ";
    cin >> n;
    int* mas = new int[n];
    cout << "Введите эл-ты массива: \n";
    for (int i = 0; i < n; i++) {
        cin >> mas[i];
    }
    int minEven = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (mas[i] % 2 == 0 and mas[i] < minEven) {
            minEven = mas[i];
        }
    }
    if (minEven % 2 == 0) {
        cout << "Минимальное чётное число это " << minEven;
    }
    else {
        cout << "В последовательности нет чётных чисел";
    }
    return 0;
}


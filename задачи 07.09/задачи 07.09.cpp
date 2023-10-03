// задачи 07.09.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    string A;
    string B;
    string C;
    int m;
    float sm;
    int c;
    float sc;
    int s;
    float ss;
    cout << "Введите название товара: ";
    cin >> A;
    cout << "Введите количество и цену 1-го товара: ";
    cin >> m;
    cin >> sm;
    cout << "Введите название товара: ";
    cin >> B;
    cout << "Введите количество и цену 2-го товара: ";
    cin >> c;
    cin >> sc;
    cout << "Введите название товара: ";
    cin >> C;
    cout << "Введите количество и цену 3-го товара: ";
    cin >> s;
    cin >> ss;
    float sum = (m * sm) + (sc * c) + (ss * s);
    cout << "Общая стоимость покупки = ";
    cout << A << ":" << m * sm << "+" << B << ":"<< c * sc << "+" << C<< ":"<< s * ss;
    cout << " = " << sum << endl;
    return 0; 
    cin >> A;
    cout << A;
}


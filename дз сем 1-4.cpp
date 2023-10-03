
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    const int size = 15;
    int mas[size];
    cout << "Введите эл-ты массива: \n";
    for (int i = 0; i < size; i++) {
        cin >> mas[i];
    }
    int MaxNumber = mas[0];
    int MinNumber = mas[0];
    int nummin = 0;
    int nummax = 0;
    for (int i = 0; i < size; i++) {
        if (mas[i] > MaxNumber) {
            MaxNumber = mas[i];
            nummax = i;
        }
        if (mas[i] < MinNumber) {
            MinNumber = mas[i];
            nummin = i;
        }
    }
    if ((MinNumber == 0) or (MaxNumber == 0)) {
        for (int i = 0; i < nummin; i++) {
            mas[i] = 0;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << mas[i] << endl;
    }
    return 0;
}


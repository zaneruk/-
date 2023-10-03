
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
    for (int i = 0; i < size; i++) {
        if (mas[i] > MaxNumber) {
            MaxNumber = mas[i];
        }
        if (mas[i] < MinNumber) {
            MinNumber = mas[i];
        }
    }
    int swap0 = mas[0];
    int swapl = mas[14];
    for (int i = 0; i < size; i++) {

        if (mas[i] == MinNumber) {
            mas[i] = swap0;
            mas[0] = MinNumber;
        }
        if (mas[i] == MaxNumber) {
            mas[i] = swapl;
            mas[14] = MaxNumber;
        }
    }
    for (int i = 0; i < size; i++) {

        cout << mas[i] << endl;
    }
    return 0;
}


// дз сем3 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const int size = 15;
	int list[size];
	cout << "Введите " << size << "элементов: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> list[i];
	}
	int MinEl = list[0];
	int MaxEl = list[0];
	for (int i = 0; i < size; i++) {
		if (list[i] > MaxEl) {
			MaxEl = list[i];
		}
		if (list[i] < MinEl) {
			MinEl = list[i];
		}
	}
	int nummin = 0;
	int nummax = 0;
	for (int i = 0; i < size; i++) {
		if (list[i] == MinEl) {
			nummin = i;
		}
		if (list[i] == MaxEl) {
			nummax = i;
		}
	}
	if (nummin < nummax) {
		cout << "сумма = " << MinEl + MaxEl;
	}
	else {
		cout << "Мин не предшествует макс";
	}
	return 0;

}

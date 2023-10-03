// дз сем3 7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const int size = 5;
	int A[size];
	cout << "Введите 5 эллементов в массив: " << endl;
	for (int i = 0; i < size; i++) {
		cin >> A[i];
	}
	/*int U[size] = {5 * size};
	for (int i = 0; i < size; i++) {
		cout << U[i];
	} */
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			if (A[i] != A[j]) {
				A[j];
			}
		}
	}
	return 0;

}

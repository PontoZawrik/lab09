#include "main.h"

void task04() {
	int n, m;

	do {
		cout << "Введите кол-во строк: ";
		cin >> n;
	} while (n <= 0);

	do {
		cout << "Введите кол-во столбцов: ";
		cin >> m;
	} while (m <= 0);


	int** array = new int* [n];

	if (array == NULL) {
		cout << "Не удалось содать массив." << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		array[i] = new int[m];

		if (array[i] == NULL) {
			cout << "Не удалось содать строку № " << i << endl;

			for (int j = 0; j < i; j++) {
				delete[] array[i];
			}
			delete[] array;
			array = NULL;

			return;
		}
	}


	int t = 100;

	cout << "\nPrint massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = t;
			t -= 5;

			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "\nPrint new massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] *= -2;
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}


	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = NULL;

	return;
}
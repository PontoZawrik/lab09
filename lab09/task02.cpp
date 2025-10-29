#include "main.h"

void task02() {
	int n, m;

	do {
		cout << "Введите кол-во строк: ";
		cin >> n;
	} while (n <= 0);

	do {
		cout << "Введите кол-во столбцов: ";
		cin >> m;
	} while (m <= 0);


	double** array = new double* [n];

	if (array == NULL) {
		cout << "Не удалось содать массив." << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		array[i] = new double[m];

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


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "array[" << i << "][" << j << "]: ";
			cin >> array[i][j];
		}
	}

	cout << "\nPrint array: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < (m - 1); j++) {
			cout << array[i][j] << "\t|\t";
		}
		cout << array[i][m - 1] << endl;
	}


	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = NULL;

	return;
}
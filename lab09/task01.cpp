#include "main.h"

void task01() {
	int n, m;

	do {
		cout << "Введите кол-во строк: ";
		cin >> n;
	} while (n <= 0);

	do {
		cout << "Введите кол-во столбцов: ";
		cin >> m;
	} while (m <= 0);


	char** array = new char*[n];

	if (array == NULL) {
		cout << "Не удалось содать массив." << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		array[i] = new char[m];

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

	cout << "\nArray: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
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
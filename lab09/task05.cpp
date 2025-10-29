#include "main.h"

void task05() {
	int n, m;

	do {
		cout << "������� ���-�� �����: ";
		cin >> n;
	} while (n <= 0);

	do {
		cout << "������� ���-�� ��������: ";
		cin >> m;
	} while (m <= 0);


	double** array = new double* [n];

	if (array == NULL) {
		cout << "�� ������� ������ ������." << endl;
		return;
	}

	for (int i = 0; i < n; i++) {
		array[i] = new double[m];

		if (array[i] == NULL) {
			cout << "�� ������� ������ ������ � " << i << endl;

			for (int j = 0; j < i; j++) {
				delete[] array[i];
			}
			delete[] array;
			array = NULL;

			return;
		}
	}


	cout << "\nPrint massiv: \n";
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			array[i][j] = getRandomFloat(-40, 40);
			cout << array[i][j] << "\t|\t";
		}
		cout << endl;
	}

	cout << "\nNew vision of array: \n";
	if (n > 2) {
		for (int i = 0; i < m; i++) {
			cout << "array[2][" << i << "] = " << array[2][i] << endl;
		}
	}

	if (m > 2) {
		for (int i = 0; i < n; i++) {
			cout << "array[" << i << "][2] = " << array[i][2] << endl;
		}
	}


	for (int i = 0; i < n; i++) {
		delete[] array[i];
	}
	delete[] array;
	array = NULL;

	return;
}
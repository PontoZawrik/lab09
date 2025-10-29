#include "main.h"

void task06_1(int[10][10], int, int);
void task06_2(int[10][10], int, int);

void task06() {
	const int n = 10, m = 10;

	int array[n][m] { { 16, 78, 0, 6, -29, 19, -52, 65, -88, 51},
						{ -79, -22, 32, -25, -62, -69, -2, -59, -75, 89},
						{ -87, 95, -22, 85, -49, -75, 76, 73, -59, -52},
						{ 30, 49, -28, -48, 0, 57, -6, -85, 0, -18},
						{ -99, -21, -95, 64, 22, -2, 69, -84, -1, -71},
						{ -25, 47, 72, 43, 15, -44, 44, 61, 4, 74},
						{ 88, -61, 0, -64, -83, -83, -83, 90, 15, 8 },
						{ -54, 99, 73, 35, -67, -87, 85, -93, -70, 10},
						{ 98, 58, -10, -29, 95, 62, 77, 89, 36, -32},
						{ 78, 60, -79, -18, 30, -13, -34, -92, 1, -38} };



	int p;

	do {
		cout << "Введите номер подзадания (-1 для выхода): ";
		cin >> p;

		switch (p) {
			case 1: task06_1(array, n, m); break;
			case 2: task06_2(array, n, m); break;

			case -1: cout << "Выход из подпрограммы.\n"; break;
			default: cout << "Неверный номер.\n";
		}

		cout << endl;
	} while (p != -1);

	return;
}


void task06_1(int array[10][10], int n, int m) {
	int count = 0;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (array[j][i] == 0) {
				count++;
				break;
			}
		}
	}

	cout << "Количество столбцов: " << count << endl;
}

void task06_2(int array[10][10], int n, int m) {
	int iMax = 0, max = 0;
	int t = 1;

	for (int i = 0; i < n; i++) {
		t = 1;
		for (int j = 0; j < m - 1; j++) {
			if (array[i][j] == array[i][j + 1]) {
				t += 1;
			}
		}

		if (t > max) {
			max = t;
			iMax = i;
		}
	}

	cout << "Строка: " << iMax << " Повторения: " << max << endl;
}
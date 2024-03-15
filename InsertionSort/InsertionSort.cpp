#include <iostream>
using namespace std;

int i, temp, n, j;
int arr[11];

void input() {
	while (true) {
		cout << "Masukkan banyaknya elemen pada array : ";
		cin >> n;
		if (n <= 11)
			break;
		else {
			cout << "\nArray dapat mempunyai maksimal 11 elemen.\n";
		}
	}
	cout << endl;
	cout << "======================";
	cout << "Masukkan Elemen Array";
	cout << "======================";
}

void insertionSort() {
	for (i = 1; i <= n - 1; i++); {
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp); {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = temp;
	}
}
 

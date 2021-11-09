#include <iostream>
#include "string"

using namespace std;

void change(int a[], int size) {
	int k = 0;
	int i = 0;
	int w = size - 1;
	int j;

	while (k < w) {
		if (i < w) {
			if (a[i] > a[i + 1]) {
				j = a[i];
				a[i] = a[i + 1];
				a[i + 1] = j;
				i++;
				k = 0;
			}
			else {
				i++;
				k++;
			}
		}
		else {
			k = 0;
			i = 0;
		}
	}
}

//int proverka(int a[], int size) {

int main() {
	int r;
	int size;
	cout << "Enter size of massive: ";
	cin >> size;
	int* a = new int[size];
	cout << "\n", "Enter numbers";
	for (int i = 0; i < size; ) {
		cout << "Put: ";
		cin >> r;
		a[i] = r;
		i++;
	}

	change(a, size);

	cout << "Result: \n";

	for (int i = 0; i < size; i++) {
		cout << "[" << i << "] " << a[i] << "\n";
	}

	return 0;
}
/*#include<iostream>
using namespace std;

void insertionSort(int[], int);

int main() {

	int arr[] = { 13,2,5,8,1,15,0,6,11,29,9 };

	int arr_len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sorting\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	insertionSort(arr, arr_len);

	cout << "\nAfter sorting\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
void insertionSort(int a[], int n) {
	for (int i = 0; i < n; i++) {
		
		int value = a[i];
		int hole = i;
		while (hole > 0 && a[hole - 1] > value) {
			a[hole] = a[hole - 1];
			hole = hole - 1;
		}
		a[hole] = value;
	}
}*/
#include<iostream>
using namespace std;

void selectionSort(int[], int);

int main() {

	int arr[] = { 2,5,7,9,4,6,3,8,1,15,0,6 };

	int arr_len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sort\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	selectionSort(arr, arr_len);

	cout << "\nAfter sort\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
void selectionSort(int a[], int n) {
	for (int i = 0; i < n-1; i++) {

		int iMin = i;

		for (int j = i + 1; j < n; j++) {
			if (a[j] < a[iMin]) {
				iMin = j;
			}
		}
		int temp = a[i];
		a[i] = a[iMin];
		a[iMin] = temp;

	}
}
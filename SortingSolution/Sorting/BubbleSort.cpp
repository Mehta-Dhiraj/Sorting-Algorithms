/*#include<iostream>
using namespace std;

void bubbleSort(int[], int);

int main() {

	int arr[] = { 2,5,8,1,15,0,6,11,29,9 };

	int arr_len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sorting\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	bubbleSort(arr, arr_len);

	cout << "\nAfter sorting\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}
void bubbleSort(int a[], int n) {
	for (int round = 1; round < n; round++) {

			int flag = 0;

		for (int i = 0; i < n - round; i++) {

			if (a[i] > a[i + 1]) {

				flag = 1;
				int temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
		if (!flag)
			return;
	}
}*/
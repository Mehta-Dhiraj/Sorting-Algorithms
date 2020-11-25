#include<iostream>
using namespace std;

void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main() {

	int arr[] = { 2,5,7,9,4,6,3,8,1,15,0,6 };

	int arr_len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sort\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	mergeSort(arr, 0, arr_len);

	cout << "\nAfter sort\n";
	for (int i = 0; i < arr_len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

void mergeSort(int a[], int lb, int ub) {
	int mid;
	if (lb < ub)
		mid = (lb + ub) / 2;
	mergeSort(a, lb, mid);
	mergeSort(a, mid + 1, ub);
	merge(a, mid, lb, ub);
}

void merge(int a[], int m, int lb, int ub) {



}
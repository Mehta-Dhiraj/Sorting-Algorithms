#include <iostream>
using namespace std;

void quickSort(int[], int, int);
int Partion(int [], int, int);

int main() {

	int arr[] = { 2,8,3,7,1,9,4,6,0,33,5,11 };

	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "Before sort\n";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}
	quickSort(arr, 0, len - 1);
	cout << "\nAfter sort\n";
	for (int i = 0; i < len; i++) {
		cout << arr[i] << " ";
	}

	return 0;
}

void quickSort(int arr[], int start, int end) {
	if (start < end) {
		int partionIndex = Partion(arr, start, end);
		quickSort(arr, start, partionIndex - 1);
		quickSort(arr, partionIndex + 1, end);
	}
}

int  Partion(int arr[],int start, int end) {
	int pivot = arr[end];
	int pIndex = start;

	for (int i = start; i < end; i++) {
		if (arr[i] <= pivot) {
			int temp = arr[i];
			arr[i] = arr[pIndex];
			arr[pIndex] = temp;
			pIndex++;
		}
	}
	int temp = arr[pIndex];
	arr[pIndex] = arr[end];
	arr[end] = temp;

	return pIndex;
}
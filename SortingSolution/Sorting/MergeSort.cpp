/*#include <iostream>
using namespace std;
void mergeSort(int[], int, int);
void merge(int[], int, int, int);

int main() {

    int arr[100], len;

    cout << "Enter the number of elemets\n";
    cin >> len;

    cout << "Enter the elements\n";

    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, len - 1);

    cout << "\nAfter sort\n";
    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

void mergeSort(int arr[], int l, int r) {
    if (l == r) {
        return;
    }
    int mid = (l + r) / 2;

    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
void merge(int arr[], int l, int mid, int r) {

    int n1 = mid - l + 1;
    int n2 = r - mid;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++) {
        left[i] = arr[l + i];
    }
    for (int j = 0; j < n2; j++) {
        right[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = l;


    while (i < n1 && j < n2) {
        if (left[i] < right[j]) {
            arr[k] = left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}*/
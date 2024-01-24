#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int j, temp;
    for (int i = 1; i < n; i++) {
        temp = arr[i];
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] > temp) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

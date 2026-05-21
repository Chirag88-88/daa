#include <iostream>
using namespace std;

// Find first occurrence
int firstOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

// Find last occurrence
int lastOccurrence(int arr[], int n, int key) {
    int low = 0, high = n - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            result = mid;
            low = mid + 1;
        }
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return result;
}

int main() {
    int n, key;

    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key to search: ";
    cin >> key;

    int first = firstOccurrence(arr, n, key);

    if (first == -1) {
        cout << "Key not present" << endl;
    } else {
        int last = lastOccurrence(arr, n, key);
        int count = last - first + 1;
        cout << "Key " << key << " occurs " << count << " times" << endl;
    }

    delete[] arr;

    return 0;
}
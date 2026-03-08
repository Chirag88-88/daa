#include <iostream>
using namespace std;

int main() {
    int n, key;
    int comparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        comparisons++;

        if(arr[i] == key) {
            cout << "Key found at position " << i << endl;
            cout << "Total comparisons = " << comparisons << endl;
            return 0;
        }
    }

    cout << "Key not found" << endl;
    cout << "Total comparisons = " << comparisons << endl;

    return 0;
}
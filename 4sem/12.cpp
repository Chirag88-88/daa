#include <iostream>
using namespace std;

int main() {
    int n, key;
    int comparisons = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Enter sorted array elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter key element to search: ";
    cin >> key;

    int low = 0, high = n - 1;
    int mid;
    bool found = false;

    while(low <= high) {
        mid = (low + high) / 2;
        comparisons++;

        if(arr[mid] == key) {
            cout << "Key found at position " << mid << endl;
            found = true;
            break;
        }
        else if(key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if(!found) {
        cout << "Key not found" << endl;
    }

    cout << "Total comparisons = " << comparisons << endl;

    return 0;
}
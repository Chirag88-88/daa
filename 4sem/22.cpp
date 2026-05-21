#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[100];

    cout << "Enter sorted array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    bool found = false;

    // Fix k
    for (int k = n - 1; k >= 2; k--) {
        int i = 0;
        int j = k - 1;

        // Two pointer search
        while (i < j) {
            int sum = arr[i] + arr[j];

            if (sum == arr[k]) {
                cout << "Found indices: i=" << i 
                     << ", j=" << j 
                     << ", k=" << k << endl;
                found = true;
                break;
            }
            else if (sum < arr[k]) {
                i++;
            }
            else {
                j--;
            }
        }

        if (found) break;
    }

    if (!found) {
        cout << "No such indices found" << endl;
    }

    return 0;
}
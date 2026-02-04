#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    int comparisons = 0;

    cout << "\nTracing Linear Search:\n";

    for (int i = 0; i < n; i++) {
        comparisons++;
        cout << "Comparison " << comparisons << ": "
             << "arr[" << i << "] = " << arr[i]
             << " with key = " << key << endl;

        if (arr[i] == key) {
            cout << "\nElement found at position "
                 << i << endl;
            cout << "Total comparisons = "
                 << comparisons << endl;
            return i;
        }
    }

    cout << "\nElement not found\n";
    cout << "Total comparisons = "
         << comparisons << endl;

    return -1;
}

int main() {
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    linearSearch(arr, n, key);

    return 0;
}

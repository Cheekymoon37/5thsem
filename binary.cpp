#include <iostream>
using namespace std;

// ---------------- ITERATIVE BINARY SEARCH ----------------
int binarySearchIterative(int arr[], int n, int key) {
    int low = 0, high = n - 1, mid, step = 1;

    cout << "\nTracing Iterative Binary Search:\n";

    while (low <= high) {
        mid = (low + high) / 2;

        cout << "Step " << step++
             << ": low=" << low
             << " high=" << high
             << " mid=" << mid
             << " arr[mid]=" << arr[mid] << endl;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return mid;
        }
        else if (key < arr[mid]) {
            cout << "Key < arr[mid], search left half\n";
            high = mid - 1;
        }
        else {
            cout << "Key > arr[mid], search right half\n";
            low = mid + 1;
        }
    }

    cout << "Element not found\n";
    return -1;
}

// ---------------- RECURSIVE BINARY SEARCH ----------------
int binarySearchRecursive(int arr[], int low, int high, int key, int step = 1) {

    if (low > high) {
        cout << "Search space empty. Element not found\n";
        return -1;
    }

    int mid = (low + high) / 2;

    cout << "Step " << step
         << ": low=" << low
         << " high=" << high
         << " mid=" << mid
         << " arr[mid]=" << arr[mid] << endl;

    if (arr[mid] == key) {
        cout << "Element found at index " << mid << endl;
        return mid;
    }
    else if (key < arr[mid]) {
        cout << "Key < arr[mid], search left half\n";
        return binarySearchRecursive(arr, low, mid - 1, key, step + 1);
    }
    else {
        cout << "Key > arr[mid], search right half\n";
        return binarySearchRecursive(arr, mid + 1, high, key, step + 1);
    }
}

int main() {
    int n, key, choice;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> key;

    cout << "\nChoose Method:\n";
    cout << "1. Iterative Binary Search\n";
    cout << "2. Recursive Binary Search\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
    case 1:
        binarySearchIterative(arr, n, key);
        break;

    case 2:
        cout << "\nTracing Recursive Binary Search:\n";
        binarySearchRecursive(arr, 0, n - 1, key);
        break;

    default:
        cout << "Invalid choice!";
    }

    return 0;
}

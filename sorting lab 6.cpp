#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n, choice;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nChoose Sorting Method:\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {

    // ---------------- BUBBLE SORT ----------------
    case 1:
        cout << "\nTracing Bubble Sort:\n";
        for (int i = 0; i < n - 1; i++) {
            cout << "Pass " << i + 1 << ":\n";
            for (int j = 0; j < n - i - 1; j++) {
                cout << "Compare " << arr[j] << " and " << arr[j + 1];
                if (arr[j] > arr[j + 1]) {
                    cout << " -> Swap\n";
                    swap(arr[j], arr[j + 1]);
                } else {
                    cout << " -> No Swap\n";
                }
                printArray(arr, n);
            }
        }
        break;

    // ---------------- SELECTION SORT ----------------
    case 2:
        cout << "\nTracing Selection Sort:\n";
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            cout << "Pass " << i + 1 << ":\n";
            for (int j = i + 1; j < n; j++) {
                cout << "Compare " << arr[minIndex]
                     << " and " << arr[j] << endl;
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            cout << "Swap " << arr[i]
                 << " and " << arr[minIndex] << endl;
            swap(arr[i], arr[minIndex]);
            printArray(arr, n);
        }
        break;

    // ---------------- INSERTION SORT ----------------
    case 3:
        cout << "\nTracing Insertion Sort:\n";
        for (int i = 1; i < n; i++) {
            int key = arr[i];
            int j = i - 1;
            cout << "Insert " << key << ":\n";
            while (j >= 0 && arr[j] > key) {
                cout << "Shift " << arr[j] << endl;
                arr[j + 1] = arr[j];
                j--;
                printArray(arr, n);
            }
            arr[j + 1] = key;
            printArray(arr, n);
        }
        break;

    default:
        cout << "Invalid choice!";
    }

    cout << "\nSorted Array:\n";
    printArray(arr, n);

    return 0;
}

#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}


void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int Index = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[Index]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[Index]);
    }
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}


void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int choice;
    int arr[100];
    int n;

    do {
        cout << "\nMenu:\n";
        cout << "1. Bubble Sort\n";
        cout << "2. Quick Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "4. Selection Sort\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter the number of elements (max 100): ";
            cin >> n;
            if (n > 100) {
                cout << "Number of elements should not exceed 100.\n";
                continue;
            }
            cout << "Enter the elements: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }
            cout << "given array: ";
            displayArray(arr, n);

            switch (choice){
                case 1:
                    bubbleSort(arr, n);
                    cout << "Sorted array using Bubble Sort: ";
                    break;
                case 2:
                    quickSort(arr, 0, n - 1);
                    cout << "Sorted array using Quick Sort: ";
                    break;
                case 3:
                    insertionSort(arr, n);
                    cout << "Sorted array using Insertion Sort: ";
                    break;
                case 4:
                    selectionSort(arr, n);
                    cout<< "sorted array using selection sort";
                    break;
            
            }
            displayArray(arr, n);
        } else if (choice != 5) {
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);
    break;
}

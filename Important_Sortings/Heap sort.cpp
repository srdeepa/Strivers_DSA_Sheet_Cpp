#include <iostream>
using namespace std;

int count = 0;

void heapify(int a[], int n, int i) {
    count++;
    int largest = i;        // Initialize largest as root
    int left = 2 * i + 1;    // Left child index
    int right = 2 * i + 2;   // Right child index

    // If left child is larger than root
    if (left < n && a[left] > a[largest]) {
        largest = left;
    }

    // If right child is larger than the largest so far
    if (right < n && a[right] > a[largest]) {
        largest = right;
    }

    // If largest is not root
    if (largest != i) {
        swap(a[i], a[largest]);  // Swap the root with the largest element

        // Recursively heapify the affected subtree
        heapify(a, n, largest);
    }
}

void heapSort(int a[], int n) {
    // Build heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(a, n, i);
    }

    // One by one extract elements from the heap
    for (int i = n - 1; i >= 0; i--) {
        // Move current root to the end
        swap(a[0], a[i]);

        // Call heapify on the reduced heap
        heapify(a, i, 0);
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sort the array using Heap Sort
    heapSort(arr, n);

    // Output the sorted array
    cout << "Sorted array:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Output the count of function calls to `heapify`
    cout << "Total calls to heapify: " << count << endl;

    return 0;
}

#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int *a, int beg, int end) {
    int pivot = a[beg];
    int i = beg, j = end + 1;

    do {
        do {
            i++;
        } while (a[i] < pivot && i <= end);

        do {
            j--;
        } while (a[j] > pivot && j >= beg);

        if (i < j) {
            swap(&a[i], &a[j]);
        }
    } while (i < j);

    swap(&a[beg], &a[j]);
    return j;
}

void quicksort(int *a, int beg, int end) {
    if (beg < end) {
        int split = partition(a, beg, end);
        quicksort(a, beg, split - 1);
        quicksort(a, split + 1, end);
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quicksort(arr, 0, n-1);

    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

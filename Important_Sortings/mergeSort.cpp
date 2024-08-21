#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int h) {
    vector<int> temp; // temporary array
    int left = l;      // starting index of left half of arr
    int right = m + 1; // starting index of right half of arr

    // Storing elements in the temporary array in a sorted manner
    while (left <= m && right <= h) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // If elements on the left half are still left
    while (left <= m) {
        temp.push_back(arr[left]);
        left++;
    }

    // If elements on the right half are still left
    while (right <= h) {
        temp.push_back(arr[right]);
        right++;
    }

    // Transferring all elements from temporary to arr
    for (int i = l; i <= h; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(int arr[], int l, int h) {
    if (l >= h) return;
    int m = (l + h) / 2;
    mergeSort(arr, l, m);  // Sort the left half
    mergeSort(arr, m + 1, h); // Sort the right half
    merge(arr, l, m, h);  // Merge the sorted halves
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, n-1);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}

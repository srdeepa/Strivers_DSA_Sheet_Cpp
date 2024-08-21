#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int n = nums.size(); // size of the array
    int low = 0, high = n - 1;

    // Perform the steps:
    while (low <= high) {
        int mid = (low + high) / 2;
        if (nums[mid] == target) return mid;
        else if (target > nums[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n); // Use vector instead of array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int k;
    cout << "Enter the search key" << endl;
    cin >> k;
    int ind = binarySearch(arr, k);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ind << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>& nums, int low, int high, int target) {

    if (low > high) return -1; //Base case.

    // Perform the steps:
    int mid = (low + high) / 2;
    if (nums[mid] == target) return mid;
    else if (target > nums[mid])
        return binarySearch(nums, mid + 1, high, target);
    return binarySearch(nums, low, mid - 1, target);
}

int search(vector<int>& nums, int target) {
    return binarySearch(nums, 0, nums.size() - 1, target);
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
    int ind = search(arr, k);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: " << ind << endl;
    return 0;
}

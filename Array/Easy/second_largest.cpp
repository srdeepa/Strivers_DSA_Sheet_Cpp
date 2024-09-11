// User function template for C++
class Solution {
  public:
    // Function returns the second
    // largest elements
    int print2largest(vector<int> &arr) {
        // Code Here
        int lar = arr[0]; 
        int secLar = -1;

    for(int i = 0; i < arr.size(); i++) {
        if (arr[i] > lar) {
            secLar = lar;
            lar = arr[i];
        } else if (arr[i] > secLar && arr[i] != lar) {
            secLar = arr[i];
        }
    }
    return secLar;
    }
};

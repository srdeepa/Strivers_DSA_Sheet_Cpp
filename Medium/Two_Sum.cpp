class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> indexed_nums;
        for (int i = 0; i < nums.size(); ++i) {
            indexed_nums.push_back({nums[i], i});
        }
        
        sort(indexed_nums.begin(), indexed_nums.end());
        
        int left = 0;
        int right = indexed_nums.size() - 1;
        
        while (left < right) {
            int sum = indexed_nums[left].first + indexed_nums[right].first;
            if (sum == target) {
                return {indexed_nums[left].second, indexed_nums[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }
        
        return {}; // return an empty vector if no solution is found
    }
};

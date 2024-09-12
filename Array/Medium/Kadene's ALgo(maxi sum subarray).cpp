class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        long long sum = 0, max = LONG_MIN;
        for(auto i : nums){
            sum += i;
            if(sum > max){
                max = sum;
            }
            if(sum < 0){
                sum = 0;
            }
        }
        return max;
    }
};

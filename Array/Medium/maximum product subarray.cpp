class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long prod = 1, max = LONG_MIN;
        for(auto i : nums){
            prod = prod*i;
            if(prod > max){
                max = prod;
            }
            if(prod == 0){
                prod = 1;
            }
        }
        prod=1;
        for(int i=nums.size()-1;i>=0;i--)
        {
          prod*=nums[i];
          if(prod > max){
                max = prod;
            }
          if(prod==0)
            prod=1;
        }
        return max;
    }
};
    

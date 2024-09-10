class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=nums.size()-1;
        int cnt=0;
        while(i<=j){
            if(nums[i]==val && nums[j] != val){
                swap(nums[i++],nums[j--]);
                cnt++;
            }
            else if(nums[i] != val && nums[j] == val){
                j--;
            }
            else if(nums[i] != val && nums[j] != val){
                i++;
                cnt++;
            }
            else{
                j--;
            }
        }
        return cnt;
    }
};


/*
Example Breakdown
Given:

nums = [3,2,2,3]
val = 3
Initial State:

i = 0, j = 3 (indices of the start and end of the array)
cnt = 0 (swap count)
First Iteration:

nums[i] = 3 and nums[j] = 3
Both nums[i] and nums[j] are equal to val.
So, the code goes to the else block and decrements j to 2.
Second Iteration:

nums[i] = 3 and nums[j] = 2
nums[i] == val and nums[j] != val
Swap nums[i] and nums[j], so nums becomes [2,2,3,3]
Increment i to 1, decrement j to 1
Increment cnt to 1
Third Iteration:

nums[i] = 2 and nums[j] = 2
Both nums[i] and nums[j] are not equal to val
So, the code goes to the else if block and increments i to 2
Increment cnt to 2
Fourth Iteration:

i = 2 and j = 1, so the loop terminates as i > j
Final Result:

The array is [2,2,3,3]
The number of swaps cnt is 1
Explanation of the Output
After processing, the function ensures that all occurrences of val are moved to the end. The array [2,2,3,3] correctly places all 3s at the end.

The expected result [2,2] is correct for the elements that are not 3, and cnt = 1 indicates that one swap was performed to move a 3 from the start to the end of the array.

Key Points:

Swapping: Only occurs when nums[i] == val and nums[j] != val.
Increment/Decrement: Adjusts the indices i and j based on the values at those indices.
Count (cnt): Tracks the number of swaps needed to achieve the final arrangement.
Conclusion
The code efficiently moves all occurrences of val to the end of the array and returns the number of swaps performed. For the input [3,2,2,3] and val = 3, the function correctly outputs 1 swap, and the array is correctly rearranged to [2,2,3,3].
*/

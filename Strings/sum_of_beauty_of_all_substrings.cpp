class Solution {
public:
    int ans = 0;
    int beautySum(string s) {

        for (int i = 0; i < s.length(); i++) {
            map<char, int> mp;
            for (int j = i; j < s.length(); j++) {
                // counting the frequency of each character
                mp[s[j]]++;

                int leastFrequent = INT_MAX;
                int mostFrequent = INT_MIN;
                // Finding most frequent and least frequent chracter
                for (auto it : mp) {
                    leastFrequent = min(leastFrequent, it.second);
                    mostFrequent = max(mostFrequent, it.second);
                }
                ans += mostFrequent - leastFrequent;
            }
        }

        return ans;
    }
};


/*
Intuition
To find the sum of the beauty for all substrings, we can iterate through all possible substrings and calculate this difference.

Approach
Iterate through each character in the string as the starting point of the substring.
Use a map to keep track of the frequency of each character in the current substring.
For each new character added to the substring, update the frequency map.
Calculate the least frequent and most frequent character counts in the current substring.
Add the difference between the most frequent and least frequent counts to the total sum.
Return the total sum after all substrings have been processed.
Complexity
Time complexity: The time complexity is O(n 
2
 ⋅m), where n is the length of the string and m is the number of unique characters in the substring. This is because for each starting point, we iterate through all possible substrings and update the frequency map.

Space complexity:
The space complexity is O(m), where m is the number of unique characters in the substring. This is due to the space needed for the frequency map.
  */

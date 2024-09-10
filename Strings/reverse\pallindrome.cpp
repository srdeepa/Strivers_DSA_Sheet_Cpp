class Solution {
public:
    string reverseWords(string s) {
        int left = 0;
        int right = s.length() - 1;
        
        // Step 1: Trim leading and trailing spaces
        while (left <= right && s[left] == ' ') left++;
        while (right >= left && s[right] == ' ') right--;
        
        string temp = "";
        string ans = "";
        
        // Step 2: Traverse and process words
        while (left <= right) {
            char ch = s[left];
            
            if (ch != ' ') {
                temp += ch; // Forming the current word
            } else if (ch == ' ' && temp != "") { 
                // Only add to the result if temp is non-empty (i.e., valid word)
                if (ans != "") {
                    ans = temp + " " + ans; // Add word in front of ans
                } else {
                    ans = temp;
                }
                temp = ""; // Reset temp for the next word
            }
            left++;
        }
        
        // Step 3: Add the last word if it's not empty
        if (temp != "") {
            if (ans != "") {
                ans = temp + " " + ans;
            } else {
                ans = temp;
            }
        }
        
        return ans;
    }
};

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        
        unordered_map<char, char> mapS, mapT;
        
        for (int i = 0; i < s.length(); ++i) {
            char charS = s[i];
            char charT = t[i];
            
            // Check the mapping for s to t
            if (mapS.find(charS) == mapS.end()) {
                mapS[charS] = charT;
            } else if (mapS[charS] != charT) {
                return false;
            }
            
            // Check the mapping for t to s
            if (mapT.find(charT) == mapT.end()) {
                mapT[charT] = charS;
            } else if (mapT[charT] != charS) {
                return false;
            }
        }
        
        return true;
    }
};

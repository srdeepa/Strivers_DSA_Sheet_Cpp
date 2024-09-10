#include <bits/stdc++.h> 
bool checkMeta(string &str1, string &str2)
{
    // Write your code here
    if(str1.length() != str2.length()){
        return false;
    }
    vector<int> mismatch;
    for(int i =0;i< str1.size();i++){
        if(str1[i] != str2[i]){
            mismatch.emplace_back(i);
        }
        if(mismatch.size() > 2){
            return false;
        }
    }
    if(mismatch.size() == 2 && str1[mismatch[0]] == str2[mismatch[1]] && str1[mismatch[1]] == str2[mismatch[0]]){
        return true;
    }
    return false;
}

/* OUTPUT
str1 = "converse"
str2 = "conserve"

Expected Output
true(yes)

*/

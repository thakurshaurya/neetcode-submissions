class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0;
        int j = 0;
        while(i <= t.size()){
            if(j == s.size()){
                return true;
            }
            if(s[j] == t[i]){
                j++;
            }
            i++;
        }
        return false;
    }
};
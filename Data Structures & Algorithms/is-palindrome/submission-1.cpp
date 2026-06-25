class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(char c : s){
            if((c >= 48 && c <= 57) || (c >= 97 && c <= 122)) check += c;
            else if(c >= 65 && c <= 90) check += char((c - 'A') + 'a');
        }

        int n = check.size();
        for(int i=0; i<n/2; ++i){
            if(check[i] != check[n-1-i]) return false;
        }
        return true;
    }
};

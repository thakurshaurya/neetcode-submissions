class Solution {
public:
    bool checkPalindrome(string temp){
        int start = 0;
        int end = temp.size()-1;
        while(start<=end){
            if(temp[start]!=temp[end]){
                return false;
            }
            else{
                start++;
                end--;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        string temp = "";
        for(char x : s){
            if(isalnum(x)){
                temp+=tolower(x);
            }
            else{
                continue;
            }
        }
        return checkPalindrome(temp);
    }
};

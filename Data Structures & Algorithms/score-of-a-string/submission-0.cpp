class Solution {
public:
    int scoreOfString(string s) {
        int i = 0;
        int j = 1;
        int sum = 0;
        while(j<s.size()){
            int val1 = s[i] - 'a';
            int val2 = s[j] - 'a';
            int sub = abs(val1 - val2);
            sum += sub;
            i++;j++;
        }
        return sum;
    }
};
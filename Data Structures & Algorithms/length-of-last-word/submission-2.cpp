class Solution {
public:
    int lengthOfLastWord(string s) {
        int maxLength = 0;
        int counter = 0;
        for(int i = s.size()-1; i >= 0; i--){
            if(s[i] != ' '){
                counter++;
            }
            else{
                if(counter>0){
                    maxLength = max(maxLength,counter);
                    return maxLength;
                }
            }
        }
        return 1;
    }
};
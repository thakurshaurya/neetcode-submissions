class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ref = strs[0];
        for(int i = 1; i<strs.size(); i++){
            string temp = "";
            for(int j = 0; j<ref.size(); j++){
                if(ref[j] != strs[i][j]){
                    break;
                }
                temp += strs[i][j];
            }
            ref = temp;
        }
        return ref;
    }
};
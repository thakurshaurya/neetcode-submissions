class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        int index = 0;
        int i = 0;
        while(index<2*n){
            if(i==n){
                i=0;
            }
            ans.push_back(nums[i]);
            index++;
            i++;
        }
        return ans;
    }
};
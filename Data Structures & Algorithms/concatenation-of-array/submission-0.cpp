class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans(nums.size()*2,0);
        int index = 0;
        for(int i=0;i<ans.size();i++){
            if(index<nums.size()){
                ans[i] = nums[index];
                index++;
            }
            else{
                index = 0;
                ans[i] = nums[index];
                index++;
            }
        }
        return ans;
    }
};
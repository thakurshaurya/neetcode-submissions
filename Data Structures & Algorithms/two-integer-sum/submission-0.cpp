class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0;i<nums.size()-1;i++){
            int temp = nums[i];
            for(int j=i+1;j<nums.size();){
                if(temp+nums[j] == target){
                    return {i,j};
                }
                else{
                    j++;
                }
            }
        }
    }
};

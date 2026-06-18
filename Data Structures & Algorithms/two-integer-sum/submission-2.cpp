class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int val = 0;
        int i = 1;
        while(true){
            if(nums[val]+nums[i]==target){
                return {val,i};
            }
            else if(i < (int)nums.size() - 1){
                i++;
            }
            else{
                val++;
                i=val+1;
            }
        }
        return {};
    }
};

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int target=nums[i];
            int freq = std::count(nums.begin(), nums.end(), target);
            if(freq>1){
                return true;
            }
        }
        return false;
    }
};
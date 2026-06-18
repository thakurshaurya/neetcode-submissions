class Solution {
    int count(vector<int> nums,int n){
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n){
                count++;
            }
        }
        return count;
    }
public:
    bool hasDuplicate(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int target=nums[i];
            // int cnt=count(nums,temp);
            // if(cnt>1){
            //     return true;
            // }
            int freq = std::count(nums.begin(), nums.end(), target);
            if(freq>1){
                return true;
            }
        }
        return false;
    }
};
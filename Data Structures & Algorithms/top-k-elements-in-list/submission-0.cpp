class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i:nums){
            freq[i]++;
        }
        vector<int> ans;
        while(k!=0){
            int maximum = 0;
            for(auto& [x,cnt]:freq){
                maximum = max(maximum,cnt);
            }
            int target = maximum;
            for(auto& [x,cnt]:freq){
                if(cnt==target){
                    ans.push_back(x);
                    cnt=0;
                    break;
                }
            }
            k--;
        }
        return ans;
    }
};

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        int ans = 0;
        int maxfreq= 0;
        for(auto p : mp){
            if(p.second>maxfreq){
                maxfreq = p.second;
                ans = p.first;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> ans(arr.size(),-1);
        int cnt = 1;
        for(int i=0;i<arr.size()-1;i++){
            if(cnt < arr.size()){
                auto max_it = std::max_element(arr.begin()+cnt, arr.end());
                ans[i] = *max_it;
                cnt++;
            }
        }
        return ans;
    }
};
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        map<int,int> index;
        for(int i=0;i<numbers.size();i++){
            index[numbers[i]] = i;
        }
        for(int i=0;i<numbers.size();i++){
            int temp = target - numbers[i];
            if(index.find(temp) != index.end()){
                ans.push_back(i+1);
                ans.push_back(index[temp]+1);
                break;
            }
            else{
                continue;
            }
        }
        return ans;
    }
};

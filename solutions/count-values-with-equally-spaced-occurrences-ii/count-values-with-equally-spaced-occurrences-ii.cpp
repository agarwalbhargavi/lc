class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int count = 0;
        for(auto &x : mp){
            vector<int>& indices = x.second;
            if(indices.size()>=3){
                bool s = true;
                for(int i=2;i<indices.size();i++){
                    if(indices[i-1]-indices[i-2] != indices[i]- indices[i-1]){
                        s = false;
                        break;
                }
                }
                if(s){
                count++;
                }
            }
        }
        return count;
    
    }
};
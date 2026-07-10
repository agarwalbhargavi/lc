class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag= false;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(int i=0;i<mp.size();i++){
            if(mp[nums[i]]>1) flag=true;
        }
        return flag;
    }
};
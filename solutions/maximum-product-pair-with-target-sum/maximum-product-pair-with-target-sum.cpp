class Solution {
public:
    vector<int> maxProductPair(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        long long maxp = LLONG_MIN;
        vector<int> ans = {-1,-1};
        for(int i=0;i<nums.size();i++){
            int needed = target - nums[i];
            if(mp.find(needed) != mp.end()){
                int j = mp[needed];

            if(nums[i] != nums[j]){
                long long pro = nums[i]*nums[j];
                if(pro>maxp){
                    maxp=pro;

                    if(nums[i]>nums[j]) ans={i,j};
                    else ans={j,i};
                }
            }
        }
        mp[nums[i]] = i;
    }
        return ans;
    }
};
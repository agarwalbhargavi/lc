class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int ans=0;
        int prev = 0;
        int n = nums.size();
        
            for(int j=k;j<n;j++){
                prev = max(prev,nums[j-k]);
                ans = max(ans,prev+nums[j]);
            
        }
        return ans;
    }
};
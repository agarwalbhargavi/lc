class Solution {
public:
    int solve(int i,vector<int>& nums, int target,int sum){
            if(i==nums.size()){
            if(sum==target) return 1;
            else return 0;
            }
        
        int plus=solve(i+1,nums,target,sum+nums[i]);
        int minus=solve(i+1,nums,target,sum-nums[i]);
        
    return plus+minus;

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return solve(0,nums,target,0);
    }
};
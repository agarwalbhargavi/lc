class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n= nums.size();
        int count=1;
        int maxcount =1;
        for(int i=1;i<n;i++){
            if(nums[i-1]%k==nums[i]%k) count++;
            else count=1;
            maxcount = max(maxcount,count);
        }
        
    return maxcount;
    }
};
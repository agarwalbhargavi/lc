class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        long long count =0;
        int inv=-1;
        for(int i=0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK){
                inv=i;
            }
                count = count + i-inv;
            }
            return count;
        }
    
};
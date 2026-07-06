class Solution {
public:
    int peakElement(vector<int>& nums){
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low+ (high-low)/2;
            if(nums[mid]<nums[mid+1]) low=mid+1;
            else high = mid;
        }
        return low;
    }
    int compareBitonicSums(vector<int>& nums) {
        int peak = peakElement(nums);
        long long asc =0;
        long long des =0;
        for(int i =0;i<=peak;i++){
            asc=asc + nums[i];
        }
        for(int i =peak ;i<=nums.size()-1;i++){
            des=des+nums[i];
        }
        if(asc==des) return -1;
        else if(asc>des) return 0;
        else return 1;
    }
};
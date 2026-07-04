class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int midInd = nums.size()/2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[midInd] && i!=midInd) return false;
        }
        return true;
    }
};
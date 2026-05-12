class Solution {
public:
    bool binarySearch(vector <int>& nums, int target){
        int low =0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = low + (high-low)/2;
            if(nums[mid]==target) return true;
            else if(nums[mid]<target) low=mid+1;
            else high=mid-1;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums2.begin(),nums2.end());
        unordered_set<int> st;
        for(int x : nums1){
        if(binarySearch(nums2,x)){
            st.insert(x);
        }
        }
        vector<int> ans(st.begin(),st.end());
        return ans;
    }
};
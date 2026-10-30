class Solution {
public:
    void solve(int i,vector<int>& nums,vector<int>& curr, vector<vector<int>>& result){
        if(i==nums.size()){
            result.push_back(curr);
            return;
        }
        curr.push_back(nums[i]);
        solve(i+1,nums,curr,result);
        curr.pop_back();
        solve(i+1,nums,curr,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> curr;
        vector<vector<int>> result;
        solve(0,nums,curr,result);
        return result;
    }
};
class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        stack<int> st;
        int n =nums.size();
        for(int i=0;i<n;i++){
            while(st.empty() || nums[i]< nums[st.top()]){
            st.push(i);
            }
        }
        int minans=0;
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && nums[st.top()]<=nums[i]){
                minans = max(minans,i-st.top());
                st.pop();
            }
        }
        return minans;
    }
};
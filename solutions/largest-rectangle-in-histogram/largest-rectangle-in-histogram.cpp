class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxarea =0;
        for(int i=0;i<=n;i++){
            int currentheight = (i==n)?0:heights[i];
            while(!st.empty() && heights[st.top()]>currentheight){
                int popped = st.top();
                st.pop();
                int leftwall=(st.empty()?-1:st.top());
                maxarea=max(maxarea,(i-leftwall-1)*heights[popped]);
            }
            st.push(i);
        }
        return maxarea;
    }
};
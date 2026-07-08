class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        // in the stack each element should represent the indices
        // since we need the distances between the last and next warmth day
        // invariant : temperatures[prev] > temperatures[current]
        // if we find a temperature that is warmer than the previous
        // the previous one becomes useless
        int n = temperatures.size();
        stack<int> st;
        vector<int> ans(n, 0);
        
        // Push the first index to kick off the stack
        st.push(0);
        
        for(int i = 1 ; i < n ; i++){
            int current = temperatures[i];
            
            // st.top() < current -> next warmth day
            // pop out the ones violating the monotonic decreasing invariant
            while(!st.empty() && temperatures[st.top()] < current){
                int lastIndex = st.top();
                st.pop();
                
                // we are finding out the warmth day after lastIndex
                // so store the next warmth day distance at lastIndex 
                // distance = currentIndex - lastIndex
                ans[lastIndex] = i - lastIndex;
            }
            // push current index to wait for its next warmer day
            st.push(i);
        }
        
        return ans;
    }
};
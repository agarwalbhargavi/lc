class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        int ans = 0;
        for(char c:s){
            if(c=='(') {
                st.push(c);
                ans++;
            }
            else{
                if(st.empty()) ans++;
                else {
                    st.pop();
                    ans--;
                }
            }
        }
        
        return ans;
    }
};
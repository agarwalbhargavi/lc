class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n =asteroids.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            while(!st.empty() && asteroids[i]<0 && st.top()>0){
                if(abs(st.top())>abs(asteroids[i])){
                    asteroids[i]=0;
                }
                else if(abs(st.top())==abs(asteroids[i])){
                    st.pop();
                    asteroids[i]=0;
                }
                else{
                    st.pop();
                }
            }
            if(asteroids[i]!=0) st.push(asteroids[i]);
        }
        vector<int> ans;
        while(!st.empty()){
            int a=st.top();
            ans.push_back(a);
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
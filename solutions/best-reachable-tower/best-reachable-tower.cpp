class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        vector<int> ans ={-1,-1};
        int best = -1;
        for(auto &tow:towers){
            int dist=(abs(tow[0]-center[0])+abs(tow[1]-center[1]));
            if(dist>radius) continue;
            if(tow[2]>best){
                ans[0]=tow[0],ans[1]=tow[1];best=tow[2];
                continue;
            }
            else if(tow[2]==best){
                ans=min(ans,{tow[0],tow[1]});
            }
        }
        return ans;
    }
};
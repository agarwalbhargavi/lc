class Solution {
public:
    string minWindow(string s, string t) {
        if(s.length()==0 || t.length()==0) return "";
        unordered_map<char,int> window,need;
        int l=0;
        int bestlen=INT_MAX,bestStart=0;
        int have=0;
        for(int r=0;r<t.length();r++){
            need[t[r]]++;
        }
        int required = need.size();
        for(int r=0;r<s.length();r++){
            char c=s[r];
            window[s[r]]++;
            if(need.count(c) && need[c]==window[c]){
                have++;
            }
            while(have==required){
                if(r-l+1<bestlen){
                    bestlen=r-l+1;
                    bestStart=l;
                }
                int leftchar=s[l];
                window[leftchar]--;
                if(need.count(leftchar) && window[leftchar]<need[leftchar]){
                    have--;
                }
                l++;
            }
        }
        if(bestlen==INT_MAX) return "";
        else return s.substr(bestStart,bestlen);
    }
};
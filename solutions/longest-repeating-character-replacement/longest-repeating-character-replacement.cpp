class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int maxlen =0;
        int windowlen=0;
        int maxfreq=0;
        int l=0;
        for(int r=0;r<s.length();r++){
            mp[s[r]]++;
            maxfreq=max(maxfreq,mp[s[r]]);
            windowlen=r-l+1;
            if(windowlen-maxfreq>k){
                mp[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;
    }
};
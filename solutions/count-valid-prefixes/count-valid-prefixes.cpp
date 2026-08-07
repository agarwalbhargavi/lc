class Solution {
public:
    int countValidPrefixes(string s) {
        int n = s.length();
        int zeroes=0;
        int ones=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeroes++;
            else ones++;
            if(abs(zeroes-ones)<=1) ans++;
        }
        return ans;
    }
};
class Solution {
public:
    int maxScore(string s) {
        int zeroes=0;
        int ones=0;
        int maxans=0;
        int ans=0;
        int n = s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='1') ones++;
        }
    for(int i=0;i<n-1;i++){
        if(s[i]=='0'){
            zeroes++;
            ans=ans+zeroes+ones;
        }
        else{
            ones--;
            ans=ans+zeroes+ones;
        }
    maxans= max(maxans,ans);
    ans=0;
    }
    return maxans;
    }
};
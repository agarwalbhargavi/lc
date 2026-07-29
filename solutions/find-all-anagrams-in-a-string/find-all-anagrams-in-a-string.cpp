class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int n1=p.length(),n2=s.length();
        if(n2<n1) return result;
        vector<int> need(26,0),window(26,0);
        for(int i=0;i<n1;i++){
            need[p[i]-'a']++;
            window[s[i]-'a']++;
        }
        if(need==window) result.push_back(0);
        for(int i=n1;i<n2;i++){
            window[s[i]-'a']++;
            window[s[i-n1]-'a']--;
            if(window==need) result.push_back(i-n1+1);
        }
        return result;
    }
};
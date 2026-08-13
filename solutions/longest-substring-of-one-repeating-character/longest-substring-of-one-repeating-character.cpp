class Solution {
public:
    int repeatingchar(string s){
        int l=0;
        int maxlen=1;
        for(int r=1;r<s.length();r++){
            if(s[r]==s[l]){
                maxlen=max(maxlen,r-l+1);
            }
            else{
                l=r;
            }
        }
        return maxlen;
    }

    vector<int> longestRepeating(string s, string queryCharacters, vector<int>& queryIndices) {
        int k=queryCharacters.length();
        vector<int> result;
        for(int i=0;i<k;i++){
            s[queryIndices[i]]=queryCharacters[i];
            int m=repeatingchar(s);
            result.push_back(m);
        }
        return result;
    }
};
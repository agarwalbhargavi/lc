class Solution {
public:
    bool canTransform(vector<int>& source, vector<int>& target) {
        if(source.size() != target.size()) return false;
        long long totalsum1=0;
        long long totalsum2=0;
        for(int i=0;i<source.size();i++){
            totalsum1+=source[i];
            totalsum2+=target[i];
        }
        if(totalsum1 != totalsum2) return false;
        else return true;
    }
};
class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        long long op = n/2;
        if(op==0) return s;
        long long f = s+m+(op -1)*(m-1);
        return f;
    }
};
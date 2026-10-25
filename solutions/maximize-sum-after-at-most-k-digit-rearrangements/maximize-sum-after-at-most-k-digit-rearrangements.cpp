class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        long long sum=0;
        vector<long long> gains;
        for(int num:nums){
            sum=sum+num;
            string s = to_string(num);
            sort(s.rbegin(),s.rend());
            long long mx = stoll(s);
            gains.push_back(mx-num);
        }
        sort(gains.rbegin(),gains.rend());
        for(int i=0;i<min(k,(int)gains.size());i++){
            if(gains[i]<=0) break;
            sum=sum+gains[i];
        }
        return sum;
    }
};
class Solution {
public:
    static const long long MOD =1e9+7;
    static const long long INV2=500000004;
    int minimumCost(vector<int>& nums, int k) {
        long long resources =k;
        long long operations =0;
        for(int x:nums){
            if(resources<x){
                long long need = x-resources;
                long long add = (need+k-1)/k;
                operations=operations+add;
                resources=resources+add*1LL*k;
                
            }
            resources-=x;
        }
        long long m = operations%MOD;
        return (m*((m+1)%MOD)%MOD)*INV2%MOD;
    }
};
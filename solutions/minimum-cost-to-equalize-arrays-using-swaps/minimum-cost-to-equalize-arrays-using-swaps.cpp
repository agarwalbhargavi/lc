class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        int n =nums1.size();
        unordered_map<int,int>total;
         for(int i=0;i<n;i++){
             total[nums1[i]]++;
             total[nums2[i]]++;
         }
        for(auto &p : total){
    if(p.second % 2 != 0){
        return -1;
    }
}
        unordered_map<int,int>f1;
        unordered_map<int,int>f2;

        for(int i=0;i<n;i++){
            f1[nums1[i]]++;
            f2[nums2[i]]++;
        }

        int cost=0;
        for(auto &p : total){
    int z = p.first;
    if(f1[z] > f2[z]){
        int diff = (f1[z] - f2[z]) / 2;
        cost += diff;
    }
}
        return cost;
    }
};
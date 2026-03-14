class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        unordered_map<int,int> h;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0){
                h[nums[i]]++;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && h[nums[i]]==1 ){
                return nums[i];
            }
        }
    return -1;
        
        
    }
};
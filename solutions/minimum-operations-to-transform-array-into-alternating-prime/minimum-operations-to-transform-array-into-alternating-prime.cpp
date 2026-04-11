class Solution {
private:
     bool isprime(int n){
            if(n<=1) return false;
            if(n==2) return true;
            if(n%2==0) return false;
            for(int i=3;i*i<=n;i+=2){
                if(n%i==0) return false;
            }
            return true;
        }
public:
    int minOperations(vector<int>& nums) {
        int operation = 0;
       for(int i=0;i<nums.size();i++){
            if(i%2==0){
                if(isprime(nums[i])) continue;
                else {
                    while(!isprime(nums[i])){
                        nums[i]++;
                        operation++;
                        
                }
            }
            }
           else {
               if(!isprime(nums[i])) continue;
               else {
                   while(isprime(nums[i])){
                       nums[i]++;
                       operation++;
               }
           }
        }
       }
        return operation;
    
}
};
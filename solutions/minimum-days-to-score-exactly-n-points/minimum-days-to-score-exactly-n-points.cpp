class Solution {
public:
    int mini(int n,int i){
        if(n==0){
            return 0;
        }
        if(n<0){
            return INT_MAX/2;
        }
        int earn = INT_MAX/2;
        int skip = INT_MAX/2;
        if(n>=i){
            earn=1+ mini(n-i,i+1);
        }  
        if(i>1){
            skip = 1+ mini(n,1);
        }

        return min(earn,skip);
    }
    
    int minDays(int n) {
        
        return mini(n,1);
    }
};
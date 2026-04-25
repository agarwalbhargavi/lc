class Solution {
public:
    int maxpile(vector<int>& piles){
        int maxp=0;
        for(int pile :piles){
            maxp = max(maxp,pile); 
        }
        return maxp;
    }

    long long totalHour(vector<int>& piles, int h){
        int n = piles.size();
        long long totalH = 0;
        for(int pile : piles){
            totalH = totalH + (pile+h-1)/h;
        }
        return totalH;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = maxpile(piles);
        while(low<=high){
            int mid = low +(high-low)/2;
            long long totalhours = totalHour(piles,mid);
            if(totalhours<=h) high = mid - 1;
            else low = mid+1;
        }
        return low;
    }
};
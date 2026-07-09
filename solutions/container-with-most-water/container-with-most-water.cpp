class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int left=0;
        int right=n-1;
        int lmax=0,rmax=0;
        int ans =0;
        while(left<right){
            lmax = max(lmax,height[left]);
            rmax = max(rmax,height[right]);

            if(height[left]<=height[right]){
                int temp1 = (right-left)*lmax;
                ans = max(ans,temp1);
                left++;
            }
            else{
                int temp2 = (right-left)*rmax;
                ans = max(ans,temp2);
                right--;
            }
        }
        return ans;
    }
};
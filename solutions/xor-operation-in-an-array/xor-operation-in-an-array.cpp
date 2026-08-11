class Solution {
public:
    int xorOperation(int n, int start) {
        int xor1=0;
        for(int i=0;i<n;i++){
            int x=start+2*i;
            xor1=xor1^x;
        }
        return xor1;
    }
};
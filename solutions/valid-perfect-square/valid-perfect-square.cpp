
   class Solution {
public:
    bool isPerfectSquare(int num) {
        for (long long i = 1; i * i <= num; i++) {  // use long long to avoid overflow
            if (i * i == num) {
                return true;
            }
        }
        return false;
    }
};

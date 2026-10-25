class Solution {
public:
    int countSetBits(int n) {
    int count = 0;
    while (n) {
        n = n & (n - 1);
        count++;
    }
    return count;
}
    int calculateScore(int a, int b) {
        int s1 = countSetBits(a);
        int s2 = countSetBits(b);
        if(s1 >= s2) return s1*s2;
        else return s2 / s1;
    }
};
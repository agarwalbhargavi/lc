class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n = digits.size();

        // Start from last digit and add 1
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;  // Just increment and return
                return digits;
            }
            digits[i] = 0; // If digit was 9, make it 0 and continue
        }

        // If all digits were 9 -> example: 999 + 1 = 1000
        digits.insert(digits.begin(), 1);
        return digits;
    
    }
};
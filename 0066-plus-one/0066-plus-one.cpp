class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            } else {
                digits[i] = 0;
            }
        }
        // If we're here, it means all digits were 9, so we need to add a new digit
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
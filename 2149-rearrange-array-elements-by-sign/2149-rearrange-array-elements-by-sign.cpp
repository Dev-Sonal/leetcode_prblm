class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
         int pos = 0, neg = 1;
        while (pos < nums.size() && neg < nums.size()) {
            // Find the first misplaced positive number
            while (pos < nums.size() && nums[pos] > 0) pos += 2;
            // Find the first misplaced negative number
            while (neg < nums.size() && nums[neg] < 0) neg += 2;

            // Swap them if both pos and neg are valid
            if (pos < nums.size() && neg < nums.size()) {
                swap(nums[pos], nums[neg]);
            }
        }return nums;
    }
};
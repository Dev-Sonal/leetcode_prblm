class Solution {
public:
    void sortColors(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int i=0;
        while (i <= end) {
            if (nums[i] == 0) {
                swap(nums[i], nums[start]);
                start++;
                i++;  // Move forward because `0` is correctly placed
            } else if (nums[i] == 2) {
                swap(nums[i], nums[end]);
                end--;
                // Do not increment `i` because the new element at `i` needs to be checked
            } else {
                i++;  // Move forward if the element is `1`
            }
        }
    }
};
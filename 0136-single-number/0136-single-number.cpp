class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int reg=0;
        for(int i=0;i<nums.size();i++){
            reg=reg^nums[i];
        }
        return reg;
    }
};
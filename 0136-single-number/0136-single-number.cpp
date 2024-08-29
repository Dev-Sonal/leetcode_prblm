class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int cnt=0;
        for(auto x:nums){
            cnt^=x;
        }
        return cnt;
        
    }
};
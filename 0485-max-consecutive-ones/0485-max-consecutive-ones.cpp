class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp=0;
        int cnt=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                cnt++;
                temp=max(cnt,temp);
            }
            else{
                cnt=0;
            }
        }
        return temp;
    }
};
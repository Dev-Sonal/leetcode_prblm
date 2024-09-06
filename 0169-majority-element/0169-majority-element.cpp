class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cand=nums[0];
        int count=1;
        for(int i=1;i<nums.size();i++){
            if (count==0){
                cand=nums[i];
            }
            if (cand==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }return cand;
    }
};
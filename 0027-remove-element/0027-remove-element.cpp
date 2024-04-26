class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int n=size(nums);
        vector<int> arr1;
        for (int i=0;i<n;i++){
            if (nums[i]!=val){
                arr1.push_back(nums[i]);
                cnt++;
            }
        }nums=arr1;
        return cnt;
    }
};
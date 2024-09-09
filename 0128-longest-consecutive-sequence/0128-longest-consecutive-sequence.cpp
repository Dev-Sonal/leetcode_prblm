class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     unordered_set<int> num;
     int n=nums.size();
     int ans=0;
     for (int i=0;i<n;i++){
        num.insert(nums[i]);
     }
     for(int i=0;i<n;i++){
        if (num.find(nums[i]-1)!=num.end()){
            continue;
        }
        else{
            int cnt=0;
            int current=nums[i];
            while(num.find(current)!=num.end()){
                cnt++;
                current++;
            }
            ans=max(cnt,ans);
        }
     }return ans;

    }
};
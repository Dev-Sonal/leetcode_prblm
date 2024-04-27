class Solution {
public:
    int minimumSum(int n, int k) {
        int ans=0;
        int i=1;
        unordered_set<int> s;
        while(n){
            if (s.find(i)==s.end()){
                s.insert(k-i);
                ans+=i;
                n--;
            }
            i++;
        }
        return ans;
    }
};
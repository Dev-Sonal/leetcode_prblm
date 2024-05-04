class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        sort(strs.begin(),strs.end());
        int l=strs.size();
        string first=strs[0], last=strs[l-1];
        for(int i=0;i<min(first.size(),last.size());i++){
            if(first[i]!=last[i]){
                return s;
            }s+=first[i];
        }return s;
    }
};
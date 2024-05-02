class Solution {
public:
    int strStr(string haystack, string needle) {
        int x=haystack.size(),y=needle.size();
        if (y>x) return -1;
        for(int i=0;i<=x-y;i++){
            string s=haystack.substr(i,y);
            if(s==needle) return i;
        }return -1;
    }
};
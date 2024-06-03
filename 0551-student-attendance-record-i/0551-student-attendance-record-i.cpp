class Solution {
public:
    bool checkRecord(string s) {
        int cnt=0;
        int cnt1=0;
        for(int i=0;i<s.size();i++){
            if(i<=s.size()-2 && s[i]=='L'){
                if (s[i+1]=='L' && s[i+2]=='L'){
                    cnt1+=1;
                }
            }
            else if (s[i]=='A'){
                cnt+=1;
            } 
            if(cnt>1 || cnt1>0){
                return false;
            }
        }
        return true;
    }
};
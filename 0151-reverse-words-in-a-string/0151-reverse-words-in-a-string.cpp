class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        string ans = "", temp = "";

        while (i < n) {
            if (s[i] != ' ') {
                temp += s[i];  // Add characters to temp until a space is found.
            } else {
                if (!temp.empty()) {
                    // Add the current word to the front of the ans, followed by a space.
                    if (!ans.empty()) {
                        ans = temp + " " + ans;
                    } else {
                        ans = temp;
                    }
                    temp = "";  // Clear temp for the next word.
                }
            }
            i++;
        }

        // Add the last word to ans if temp is not empty.
        if (!temp.empty()) {
            if (!ans.empty()) {
                ans = temp + " " + ans;
            } else {
                ans = temp;
            }
        }

        return ans;
    }
};

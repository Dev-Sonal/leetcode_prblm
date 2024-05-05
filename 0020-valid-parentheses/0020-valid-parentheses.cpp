#include <stack>
#include <string>
#include <unordered_map>

class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> st;
        std::unordered_map<char, char> parenMap = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        for (char ch : s) {
            if (parenMap.find(ch) != parenMap.end()) {
                if (st.empty() || st.top() != parenMap[ch]) {
                    return false;
                }
                st.pop();
            } else {
                st.push(ch);
            }
        }

        return st.empty();
    }
};

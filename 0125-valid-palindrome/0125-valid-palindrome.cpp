class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) {
            left++;
        }
        while (left < right && !isalnum(s[right])) {
            right--;
        }

        char leftChar = tolower(s[left]);
        char rightChar = tolower(s[right]);

        if (leftChar != rightChar) {
            return false;
        }

        left++;
        right--;
    }

    return true;
    }
};
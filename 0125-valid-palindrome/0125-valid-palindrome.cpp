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

        // Convert characters to lowercase for comparison
        char leftChar = tolower(s[left]);
        char rightChar = tolower(s[right]);

        // If characters are not equal, return false
        if (leftChar != rightChar) {
            return false;
        }

        // Move pointers towards each other
        left++;
        right--;
    }

    return true;
    }
};
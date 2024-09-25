class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
        return false; // If lengths are different, they can't be anagrams
    }

    unordered_map<char, int> count; // To store frequency of characters

    // Count frequency of each character in string 's'
    for (char ch : s) {
        count[ch]++;
    }

    // Subtract frequency based on characters in string 't'
    for (char ch : t) {
        count[ch]--;
        if (count[ch] < 0) {
            return false; // More occurrences of a character in 't' than in 's'
        }
    }

    return true;
    }
};
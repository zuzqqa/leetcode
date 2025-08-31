/* 242. Valid Anagram
Given two strings s and t, return true if t is an anagram of s, and false otherwise. 

Example 1:
  Input: s = "anagram", t = "nagaram"
  Output: true
*/
class Solution {
public:
    /* Time complexity: O(n) 
    Space complexity: O(1) */
    bool isAnagram(string s, string t) {
        if (s.size() != t.size())
            return false;

        // We only have lowercase English letters: 'a' to 'z'
        // So we can use a fixed-size array of 26 integers
        // count[i] represents the balance of character (i + 'a')
        int count[26] = {0};

        // Traverse both strings simultaneously
        for (int i = 0; i < s.size(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // After processing both strings:
        // - If s and t are true anagrams, every character increment
        //   from s will be "canceled out" by a corresponding decrement
        //   from t.
        // - So all entries in count[] should be exactly 0.
        for (int c : count) {
            if (c != 0) return false;
        }

        return true;
    }
};
/* Follow up: 
What if the inputs contain Unicode characters? How would you adapt your solution to such a case?

Instead of an array we would use unordered_map<wchar_t, int>.
        
        unordered_map<wchar_t, int> count;

        for (size_t i = 0; i < s.size(); i++) {
            count[s[i]]++;
            count[t[i]]--;
        }
*/

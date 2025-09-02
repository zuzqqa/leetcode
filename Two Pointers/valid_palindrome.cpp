/* 125. Valid Palindrome
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
	Input: s = "A man, a plan, a canal: Panama"
	Output: true
	
	Explanation: 
	"amanaplanacanalpanama" is a palindrome.
*/
class Solution {
public:
	/* Time complexity: O(n);
	Space complexity: O(1);
	*/
    bool isPalindrome(string s) {
        string a, b;
        int i = 0, j = s.size() - 1;

        while (i <= j) {
            if (!isalnum(s[i])) {
                i++;
                continue;
            }
            if (!isalnum(s[j])) {
                j--;
                continue;
            }

            a.push_back(tolower(s[i]));
            b.push_back(tolower(s[j]));

            i++;
            j--;
        }
        
        return a == b;
    }
};

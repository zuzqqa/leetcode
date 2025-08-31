/* 217. Contains Duplicate
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

Example 1:
    Input: nums = [1,2,3,1]
    Output: true
    
    Explanation:
    The element 1 occurs at the indices 0 and 3.
*/
class Solution {
public:
    /* Time Complexity: O(n) average, O(n²) worst-case (only if extreme hash collisions occur)
    Space Complexity: O(n) */
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            // insert() returns a pair {iterator, bool}
            // 'bool' is true if insertion took place (element was new)
            // false if element already existed -> duplicate
            if (!seen.insert(num).second)
                return true; // duplicate found, early exit
        }

        return false; // all unique
    }
};

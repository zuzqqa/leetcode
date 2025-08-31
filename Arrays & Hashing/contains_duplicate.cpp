class Solution {
public:
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

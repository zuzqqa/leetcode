/* 1. Two Sum 
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
  Input: nums = [2,7,11,15], target = 9
  Output: [0,1]

  Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
*/
class Solution {
public:
    /* Time complexity: O(n) average, O(n²) worst-case (due to rare hash collisions)
    Space complexity: O(n) for storing elements in the hash map.
    */
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store numbers we've seen so far
        // Key   = number value
        // Value = index where that number appears
        unordered_map<int, int> numMap;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // complement = the number we need to pair with nums[i]
            // to reach the target

            // Check if we've already seen that complement earlier
            if (numMap.count(complement)) {
                // If yes, return the pair of indices:
                //   index of the complement (stored in map)
                //   current index i
                return {numMap[complement], i};
            }

            // Otherwise, store this number and its index
            numMap[nums[i]] = i;
        }

        return {};
    }
};

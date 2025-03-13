// Q1) Duplicate elements in array
// APPROACH: sort the array, then check if there are any repeating elements.
// TC: O(n) SC:O(1)
class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            sort(nums.begin(), nums.end());  // O(N log N)
            for (int i = 1; i < nums.size(); i++) {
                if (nums[i] == nums[i - 1]) {
                    return true;
                }
            }
            return false;
        }
    };
// q1.)   1. Two Sum
// APPROACH: Check in map if there exist (k-map[i])
// TC: O(n)  SC:O(n) where n = length of string
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int k) {
            unordered_map<int,int> map;
            vector<int> ans;
            for(int i = 0; i<nums.size(); i++){
                if(map.find(k - nums[i]) != map.end()){
                    ans.push_back(map[k - nums[i]]);
                    ans.push_back(i);
                    return ans;
                }
                map[nums[i]] = i;
            }
            return ans;
        }
    };

// q2.)  75. Sort Colors
// APPROACH: count no. 0's, 1's and 2's , and then overwrite in the same array.
// TC: O(n)  SC:O(1) where n = length of string
   
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a = 0;
        int b = 0;
        int c = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0) a++;
            else if(nums[i] == 1) b++;
            else c++;
        }
        for(int i = 0; i< a;i++){
            nums[i] = 0;
        }
        for(int i = a; i< a+b;i++){
            nums[i] = 1;
        }
        for(int i = a+b; i< a+b+c;i++){
            nums[i] = 2;
        }
    }
};

// q3.)  Maximum Score from Subarray Minimums
// APPROACH: check for every pair and return the maximum sum.
// TC: O(n)  SC:O(1) where n = length of string
class Solution {
    public:
      // Function to find pair with maximum sum
      int pairWithMaxSum(vector<int> &arr) {
          int sum = 0, maxsum = 0;
          for(int i = 0; i < arr.size()-1; i++){
              sum = arr[i]+arr[i+1];
              maxsum = max(maxsum,sum);
          }
          return maxsum;
      }
  };
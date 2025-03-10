// q1.)   283. Move Zeroes
// APPROACH: Copy elements in place if it is not 0 then make remaining elements 0.
// TC: O(n)  SC:O(1) where n = length of string

class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int k = 0;
            for(int i = 0; i<nums.size(); i++){
                if(nums[i] != 0){
                    nums[k] = nums[i];
                    k++;
                }
            }
            while(k<(nums.size())){
                nums[k] = 0;
                k++;
            }
        }
    };
    

// q2.)  189. Rotate Array
// APPROACH: copy elements to another array using index k then copy back to original array
// TC: O(n)  SC:O(n) where n = length of string

class Solution {
    public:
        void rotate(vector<int>& nums, int k) {
            vector<int> b;
            int n = nums.size();
            k %= n;
            k = n-k;
            for(int i = 0; i<nums.size();i++){
                b.push_back(nums[(i+k)%n]);
            }
            for(int i = 0; i<nums.size();i++){
                nums[i]=b[i];
            }
            return;
        }
    };
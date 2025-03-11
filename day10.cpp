// q1.) 2149. Rearrange Array Elements by Sign   
// APPROACH: Divide the array into two parts- one comprising of only positive integers and the other of negative integers.
// TC: O(n)  SC:O(n) where n = length of string
class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& n) {
            vector<int> pos;
            vector<int> neg;
            for(int i = 0; i<n.size(); i++){
                if(n[i]>0) pos.push_back(n[i]);
                else neg.push_back(n[i]);
            }
            for(int i = 0; i<n.size(); i++){
                if(i%2 == 0) n[i]=pos[i/2];
                else n[i]=neg[i/2];
            }
            return n;
        }
    };



// q2.) 31. Next Permutation
// APPROACH: find the index at which array is not decreasing from the end then perform following operations
// TC: O(n)  SC:O(1) where n = length of string
class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n = nums.size(), i, j;
            for(i = n-1; i > 0; i--){
                if(nums[i-1] < nums[i]){
                    break;               
                } 
            }
            if(i == 0){
                reverse(nums.begin(), nums.end());
            }else{
                for(j = n-1; j>=i;j--){
                    if(nums[j]>nums[i-1]){
                        break;
                    } 
                }
                swap(nums[j],nums[i-1]);
                reverse(nums.begin() + i, nums.end());
            }   
        }
    };


// q3.)  121. Best Time to Buy and Sell Stock
// APPROACH: check for every pair and return the maximum sum.
// TC: O(n)  SC:O(1) where n = length of string
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int l = 0, profit = 0;
            for(int r = 1; r<prices.size(); r++){
                if(prices[r]<prices[l]){
                    l=r;
                }else{
                    profit = max(profit, prices[r]-prices[l]);
                }
            }
            return profit;
        }
    };
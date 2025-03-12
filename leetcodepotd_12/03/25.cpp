// Approach : binary search
// tc : O(logn)  sc: O(1)


class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int n = nums.size();
            int low = 0, high = n-1;
            while(low<high){
                int mid = (low+high)/2;
                if(nums[mid]>0){
                    high = mid;
                }
                else if(nums[mid]<=0){
                    low = mid+1;
                }
            }
            if(nums[0]==0){
                    if(low == n-1){
                        return 0;
                    }
                    return n-low;
                }
            if(n-low > n/2) return n-low;
            else{
                int x = low;
                while(nums[low]>=0 && low>=0){
                    low--;
                }
                return max(low+1, n-x);
            }
    
        }
    };
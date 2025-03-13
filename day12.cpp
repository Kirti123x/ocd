// q1.) 704. Binary Search
// TC: O(logn)  SC:O(1) where n = length of string

class Solution {
    public:
        public:
        int search(vector<int> &arr, int k){
            return binarysearch(arr,k,0,arr.size()-1);
        }
        private:
        int binarysearch(vector<int> &arr, int k, int low, int high) {
            if(low>high) return -1;
            int mid = (low+high)/2;
            if(arr[mid] == k) return mid;
            else if(k > arr[mid]) return binarysearch(arr,k,mid+1,high);
            else return binarysearch(arr,k,low,mid-1);
        }
    };


// q2.) 34. Find First and Last Position of Element in Sorted Array
// tc : O(logn)   sc : O(1)

class Solution {
    public:
        vector<int> searchRange(vector<int>& nums, int k) {
            vector<int> ans;
            int low = 0;
            int high = nums.size()-1;
            int first =-1;
            int last =-1;
            //first
            while(low<=high){
                int mid = low + (high - low) / 2;
                if(nums[mid] == k && ((mid == 0) || (nums[mid-1]!=k))){
                    first = mid;
                    break;
                }
                else if((nums[mid] == k && nums[mid-1] == k) || (nums[mid]>k)){
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }        
            }
            low = 0;
            high = nums.size()-1;
            //last
            while(low<=high){
                int mid = low + (high - low) / 2;
                if((nums[mid] == k) && ((mid == nums.size()-1) || (nums[mid+1]!=k))){
                    last = mid;
                    break;
                }
                else if((nums[mid] == k && nums[mid+1] == k) || (nums[mid]<k)){
                    low = mid +1;
                }
                else{
                    high = mid-1;
                }
            }
            ans.push_back(first);
            ans.push_back(last);
            return ans;
        }
    };

// q3.) 35. Search Insert Position
// tc : O(logn)   sc : O(1)

class Solution {
    public:
        int searchInsert(vector<int>& nums, int target) {
            int low = 0;
            int high = nums.size()-1;
            while(low<=high){
                int mid = (low+high)/2;
                if(nums[mid]==target) return mid;
                else if(nums[mid]>target){
                    high = mid-1;
                }
                else{
                    low= mid+1;
                }
            }
            return low;
        }
    };
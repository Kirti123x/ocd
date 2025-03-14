// Q1: Floor and ceiling of sorted array 
// approach : binary search
// tc : O(logn)  sc : O(1)

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	int low = 0, high = n-1, floor = -1, ceil = -1;

	if(a[0]>x){
		return {-1, a[0]};
	}
	if(a[n-1]<x){
		return {a[n-1],-1};
	}
	while(low<=high){

		int mid = (low+high)/2;

		if(a[mid]==x){
			return {x,x};;
		}
		else if(a[mid]<x){
			floor = a[mid];
			low = mid+1;
		}
		else{
			ceil = a[mid];
			high = mid-1;
		}
	};
	return {floor,ceil};
}


// Q2 : 153. Find Minimum in Rotated Sorted Array
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int low = 0, high = nums.size()-1;    
            if(nums[low] < nums[high]) return nums[low];
            while(high > (low+1)){
                int mid = low + (high-low)/2;
                if(nums[high] > nums[low]){
                    return nums[low];
                }
                else if(nums[mid] > nums[low]){
                    low = mid+1;
                } 
                else if(nums[mid] < nums[low]){
                    high = mid;
                }
            }
            if(nums[low] > nums[high]){
                return nums[high]; 
            }else{
                return nums[low];
            }            
        }
    };


// Q3 : 33. Search in Rotated Sorted Array
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int left = 0;
            int right = nums.size()-1;
            while(left <= right){
                int mid = left + (right-left)/2;
    
                if(nums[mid] == target) return mid;
    
                if(nums[mid] >= nums[left]){
                    if(target >= nums[left] && target < nums[mid]){
                        right = mid-1;
                    }else{
                        left = mid+1;
                    }
                }else{
                    if(target <= nums[right] && target > nums[mid]){
                        left = mid+1;
                    }else{
                        right = mid-1;
                    }
                }
            }
            return -1;
        }
    };
// Q1 : Square Root
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
      int floorSqrt(int n) {
          // Your code goes here
          int low = 1;
          int high = n;
          int ans = 0;
          
          while(high >= low){
              int mid = low +(high-low)/2;
              
              if(mid*mid == n){
                  return mid;
              } 
              else if(mid*mid > n){
                  high = mid-1;
              }
              else if(mid*mid < n){
                  ans = mid;
                  low = mid+1;
              }
          }
          return ans;
      }
  };

// Q3 : Koko eating bananas
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
        int minEatingSpeed(vector<int>& piles, int h) {
            long low = 1, high = *max_element(piles.begin(), piles.end()), mid;
    
            while(low<=high){
                mid = (high + low)/2;
                long sum = 0;   
    
                for(int i=0;i<piles.size();i++){
                    sum += ceil( (double)piles[i]/mid );
                }
                if(sum<=h){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            return low;
        }
    };



// Q3 : 33. Search in Rotated Sorted Array
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
        int smallestDivisor(vector<int>& nums, int h) {
            long low = 1, high = *max_element(nums.begin(), nums.end()), mid;
            while(low<=high){
                mid = (high + low)/2;
                long sum = 0;   
    
                for(int i=0;i<nums.size();i++){
                    sum += ceil( (double)nums[i]/mid );
                }
                if(sum<=h){
                    high = mid -1;
                }
                else{
                    low = mid + 1;
                }
            }
            return low;
        }
    };
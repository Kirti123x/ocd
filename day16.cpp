// Q1 : 162. Find Peak Element
// approach : binary search
// tc : O(logn)  sc : O(1)

class Solution {
    public:
        int findPeakElement(vector<int>& arr){
            int n = arr.size(), ans = 0;
            if(n == 1 || arr[0]>arr[1]) return 0; 
            else if(arr[n-1]>arr[n-2]) return n-1;
            for(int i=1;i<n-1;i++){
                if(arr[i]>arr[i-1] && arr[i]>arr[i+1])
                return i;
            }
            return -1;
        }
    };

// Q2 : Square Root
// approach : binary search
// tc : O(logn)  sc : O(1)

// Q2 : 74. Search a 2D Matrix
// approach : binary search
// tc : O(logn)  sc : O(1)
class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& a, int k) {
            int n = a.size(), m = a[0].size();
            int low = 0, high = m*n-1;
            while(low<=high){
                int mid = (low+high)/2;
                int i = a[mid/m][mid%m];
                if(i == k) return true;
                else if(i>k) high = mid-1;
                else low = mid+1;
            }
            return false;
        }
    };

// Q3 : 74. Search a 2D Matrix II
// tc : O(logn)  sc : O(1)
    class Solution {
        public:
            bool func(vector<vector<int>>& matrix, int a, int b, int k){
                while(a < matrix.size() && b >= 0){
                    int x = matrix[a][b];
                    if(x == k) return true;
                    else if(x > k) b--;
                    else a++;
                }        
                return false;
            }
            bool searchMatrix(vector<vector<int>>& matrix, int k) {
                return func(matrix, 0, matrix[0].size()-1, k);
            }
        };
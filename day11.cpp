// q1.) 118. Pascal's Triangle
// tc: O(n^2)   sc : O(n)


class Solution {
    public:
        vector<vector<int>> generate(int numRows) {
            vector<vector<int>> triangle;
    
            for (int i = 0; i < numRows; ++i) {
                vector<int> row(i + 1, 1);
    
                for (int j = 1; j < i; j++) {
                    row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
                }
                triangle.push_back(row);
            }
    
            return triangle;
        }
    };

// q2.) 48. Rotate Image
// tc: O(n^2)   sc : O(n)

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n = matrix.size();
            vector<vector<int>> ans(n ,vector<int>(n, 0));
            for(int i = 0;i<n; i++){
                for(int j = 0; j<n; j++){
                    ans[j][n-1-i] = matrix[i][j];
                }
            }
            for(int i = 0;i<n; i++){
                for(int j = 0; j<n; j++){
                    matrix[i][j] = ans[i][j];
                }
            }
        }
    };

// q3.) 54. Spiral Matrix
// tc : O(n^2)  sc : O(1)

    class Solution {
        public:
            vector<int> spiralOrder(vector<vector<int>>& matrix) {
                if (matrix.empty() || matrix[0].empty()) return {};
        
                int n = matrix.size(), m = matrix[0].size();
                int top = 0, left = 0, bottom = n-1, right = m-1;
                vector<int> ans;
        
                while(top <= bottom && left <= right){
                    for (int i = left; i <= right; ++i) {
                        ans.push_back(matrix[top][i]);
                    }
                    ++top;
        
                    for (int i = top; i <= bottom; ++i) {
                        ans.push_back(matrix[i][right]);
                    }
                    --right;
                    if (top <= bottom) {
                        for (int i = right; i >= left; --i) {
                            ans.push_back(matrix[bottom][i]);
                        }
                        --bottom;
                    }
                    if (left <= right) {
                        for (int i = bottom; i >= top; --i) {
                            ans.push_back(matrix[i][left]);
                        }
                        ++left;
                    }
                    
                }
                return ans;
            }
        };
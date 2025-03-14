// q1.) 832. Flipping an Image
// tc: O(n^2)    sc: O(n)

class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int n = image.size(), m = image[0].size();
            vector<vector<int>> ans(n,vector<int>(m,0));
    
            for(int i = 0; i<n; i++){
                for(int j = 0;j<m; j++){
                    if(image[i][m-1-j] == 0){
                        ans[i][j] = 1;
                    }else{
                        ans[i][j] = 0;
                    } 
                }
            }
            return ans;
        }
    };

    
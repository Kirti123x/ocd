//  2965. Find Missing and Repeated Values


class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            vector<int> ans;
            unordered_map<int,int> map;
            int sum = 0, n = grid.size();
    
            for(int i = 0; i<grid.size(); i++){
                for(int j = 0; j<grid.size(); j++){
                    if(map.find(grid[i][j]) != map.end()){
                        ans.push_back(grid[i][j]);
                    }
                    map[grid[i][j]]++;
                    sum+=grid[i][j];
                }
            }
            int y = (n*n*(n*n+1)/2) + ans[0] - sum;
            ans.push_back(y);
            return ans;
        }
    };
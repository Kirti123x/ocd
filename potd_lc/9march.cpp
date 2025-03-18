// 3208. Alternating Groups II


class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
             for(int i=0;i<k-1;i++){
                colors.push_back(colors[i]);
            }
            int l = 0, r = 1, n = colors.size(), ans = 0;
            while(r<n){
                if(colors[r]==colors[r-1]){
                    l = r;
                }
                if(r-l+1==k){
                    ans++;
                    l++;
                }
                r++;
            }
            return ans;
        }
    };
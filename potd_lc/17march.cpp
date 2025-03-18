// tc : O(n)     sc : O(n)

class Solution {
    public:
        bool divideArray(vector<int>& a) {
            int n = a.size();
            unordered_map<int,int> m;
    
            sort(a.begin(), a.end());
    
            for(int i : a){
                m[i]++;
            }
            for(auto i : m){
                if(i.second % 2 != 0) return false;
            }
            return true;
        }
    };
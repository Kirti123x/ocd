// q2 Longest palindrome

class Solution {
    public:
        int longestPalindrome(string s) {
            unordered_map<char, int> mp;
            for(char i:s){
                mp[i]++;
            }
            int ans=0;
            bool hasOdd = false;
            int odd = 0;
            for(auto it:mp){
                int a = it.second;
                if(a%2 == 0){
                    ans += a;
                }else{
                    ans+=(a-1);
                    hasOdd = true;
                }
            }
            if(hasOdd)ans+=1;
            return ans;
        }
    };
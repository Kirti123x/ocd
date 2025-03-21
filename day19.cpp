// q1.) 1614. Maximum Nesting Depth of the Parentheses
// tc : O(n)  sc : O(1)

class Solution {
    public:
        int maxDepth(string s) {
            int cnt = 0, maxcnt = 0;
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '('){
                    cnt++;
                    maxcnt = max(maxcnt,cnt);
                    cout<<maxcnt;
                }
                else if(s[i] == ')'){
                    cnt--;
                }
            }
            return maxcnt;
        }
    };

// q2.) 13. Roman to Integer
// tc : O(n^)  sc : O(1)

class Solution {
    public:
        int romanToInt(string s) {
            long long ans = 0;
            int it = 0;
    
            while(it < s.size()){
                if(s[it] == 'I'){
                    if(s[it+1] == 'V'){
                        ans += 4;
                        it += 2;
                    }
                    else if(s[it+1] == 'X'){
                        ans += 9;
                        it += 2;
                    }
                    else{
                        ans += 1;
                        it++;
                    }
                } 
                if(s[it] == 'V'){
                    ans += 5;
                    it++;
                } 
                if(s[it] == 'X'){
                    if(s[it+1] == 'L'){
                        ans += 40;
                        it += 2;
                    }
                    else if(s[it+1] == 'C'){
                        ans += 90;
                        it += 2;
                    }
                    else{
                        ans += 10;
                        it++;
                    }
                } 
                if(s[it] == 'L'){
                    ans += 50;
                    it++;
                } 
                if(s[it] == 'C'){
                    
                    if(s[it+1] == 'D'){
                        ans += 400;
                        it += 2;
                    }
                    else if(s[it+1] == 'M'){
                        ans += 900;
                        it += 2;
                    }
                    else{
                        ans += 100;
                        it++;
                    } 
                } 
                if(s[it] == 'D'){
                    ans += 500;
                    it++;
                } 
                if(s[it] == 'M'){
                    ans += 1000;
                    it++;
                } 
            }
            return ans;
        }
    };
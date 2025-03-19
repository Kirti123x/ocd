// q1.) 205. Isomorphic Strings
// tc : O(n)  sc : O(n)
class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            unordered_map<char,int> mapS;
            unordered_map<char,int> mapT;
    
            for(int i = 0; i<s.size(); i++){
                if (mapS.count(s[i]) && mapS[s[i]] != t[i]) return false;
                if (mapT.count(t[i]) && mapT[t[i]] != s[i]) return false;
                mapS[s[i]] = t[i];
                mapT[t[i]] = s[i];
            }
            
            return true;
        }
    };


// q2.) 1021. Remove Outermost Parentheses
// tc : O(n)  sc : O(1)
    class Solution {
        public:
            string removeOuterParentheses(string s) {
                if(s.size() == 0) return s;
                int count = 0;
                string ans = "";
                for(int i = 0; i < s.size(); i++){
                    if(s[i] == '('){
                        if(count>0){
                            ans+=s[i];
                        }
                        count++;
                    } 
                    else if(s[i] == ')'){
                        count--;
                        if(count>0){
                            ans+=s[i];
                        }
                    } 
                }
                return ans;
            }
        };
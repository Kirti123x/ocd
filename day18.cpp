// q1.) 242. Valid Anagram
// tc : O(n)  sc : O(n)

class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length()) return false;
        
            int freq[26] = {0}; // Fixed array for lowercase letters
    
            for (char c : s) freq[c - 'a']++;  // Increment count
            for (char c : t) freq[c - 'a']--;  // Decrement count
    
            for (int i = 0; i < 26; i++) {
                if (freq[i] != 0) return false;
            }
    
            return true;
        }
    };


// q2.) 14. Longest Common Prefix
// tc : O(n^2)  sc : O(1)

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            if (strs.empty()) return "";
    
            string prefix = strs[0]; 
    
            for (int i = 1; i < strs.size(); i++) {
                while (strs[i].find(prefix) != 0) { 
                    prefix.pop_back();
                    if (prefix.empty()) return "";
                }
            }
            
            return prefix;
        }
    };
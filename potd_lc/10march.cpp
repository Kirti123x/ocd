//  3306. Count of Substrings Containing Every Vowel and K Consonants II

class Solution {
    public:
        long long countOfSubstrings(string word, int k) {
            long long l = 0, cons = 0, n = word.size(), count = 0;
            unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
            unordered_map<char, int> vow; 
            int v = 0; 
    
            for (int r = 0; r < n; r++) {
                char ch = word[r];
                if (vowels.find(ch) == vowels.end()) {
                    cons++;
                } 
                else{
                    if(vow[ch] == 0) v++;
                    vow[ch]++;
                }
                while (cons > k) {
                    char start = word[l];
                    if(vowels.find(start) == vowels.end()) {
                        cons--;
                    }else{
                        vow[start]--;
                        if (vow[start] == 0) v--;
                    }
                    l++;
                }
                if (cons == k && v == 5) {
                    count++;
                }
            }
            return count;
        }
    };
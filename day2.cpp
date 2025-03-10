// DAY 2
// Q1) GOOD BAD STRING
// APPROACH: counting the number of consecutive vowels or consonants and then comparing them to find out if the string is bad or not.
//  TC: O(n)  SC:O(1) where n = length of string
class Solution
{
public:
    int isGoodorBad(string S)
    {
        unordered_map<char, int> vowels = {{'a', 1}, {'e', 1}, {'i', 1}, {'o', 1}, {'u', 1}};
        int vow = 0, cons = 0;

        for (int i = 0; i < S.size(); i++)
        {
            if (vowels[S[i]])
            {
                vow++;
                cons = 0;
            }
            else if (S[i] == '?')
            {
                vow++;
                cons++;
            }
            else
            {
                cons++;
                vow = 0;
            }

            if (vow > 5 || cons > 3)
                return 0;
        }
        return 1;
    }
};

// Q2) 2570. Merge Two 2D Arrays by Summing Values
// APPROACH: adding the same id's values and appending the rest in the res vector.
// TC: O(n1 + n2) SC:O(n1 + n2) where n1 and n2 are size of the 2 vectors
class Solution
{
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        int n1 = nums1.size(), n2 = nums2.size();
        vector<vector<int>> ans;
        int i = 0, j = 0;

        while (i < n1 && j < n2)
        {
            if (nums1[i][0] < nums2[j][0])
            {
                ans.push_back({nums1[i][0], nums1[i][1]});
                i++;
            }
            else if (nums1[i][0] > nums2[j][0])
            {
                ans.push_back({nums2[j][0], nums2[j][1]});
                j++;
            }
            else
            {
                ans.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++;
                j++;
            }
        }
        if (i == n1)
        {
            while (j < n2)
            {
                ans.push_back({nums2[j][0], nums2[j][1]});
                j++;
            }
        }
        else if (j == n2)
        {
            while (i < n1)
            {
                ans.push_back({nums1[i][0], nums1[i][1]});
                i++;
            }
        }
        return ans;
    }
};
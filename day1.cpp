// q1.) https://leetcode.com/problems/ugly-number/submissions/1556339828/?envType=problem-list-v2&envId=math
//Ugly number
// TC:O(log(n))  SC: O(1)


class Solution {
    public:
        bool isUgly(int n) {
            if(n == 0) return false;
            while(n%2 == 0){
                n /= 2;
            }
            while(n%3 == 0){
                n /= 3;
            }
            while(n%5 == 0){
                n /= 5;
            }
            if(n!=1) return false;
            return true;
        }
    };
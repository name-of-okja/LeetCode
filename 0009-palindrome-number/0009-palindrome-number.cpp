class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0)
        {
            return false;
        }
        
        long long a = 0;
        int b = x;

        while (b)
        {
            a = a * 10;
            a += b % 10;
            b /= 10;
        }

        return a == x;
    }
};
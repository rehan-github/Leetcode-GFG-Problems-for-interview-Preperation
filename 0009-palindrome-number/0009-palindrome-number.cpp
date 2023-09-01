class Solution {
public:
    bool isPalindrome(int x) {
        bool ans = false;
        int temp = x;
        long long int n = 0;
        while(temp >0)
        {
            int i = temp%10;
            n = n*10 + i;
            temp /=10;
        }
        if(n == x)
        {
            return true;
        }
        return false;
        
    }
};
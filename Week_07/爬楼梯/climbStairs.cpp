class Solution {
public:
//FibonacciÊıÁĞ
    int climbStairs(int n) {
        if(n <= 2) return n;
        
        int i = 1, j = 2, k = 3;
        for(int index = 3; index != n; ++index)
        {
            i = j;
            j = k;
            k = i + j;
        }
        return k; 
    }
};
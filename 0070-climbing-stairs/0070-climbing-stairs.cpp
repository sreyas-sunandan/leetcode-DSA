class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        else if(n == 2) return 2;
        else {
            int x = 2;
            int y = 1;
            for(int i = 3; i <= n; i++) {
                int z = x + y;
                x = z;
            }
            return x;
        }
        
        
    }
};
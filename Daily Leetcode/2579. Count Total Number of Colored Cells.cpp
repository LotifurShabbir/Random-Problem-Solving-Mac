class Solution {
    public:
        long long coloredCells(int n) {
            // n = 1 hole, 1
            // n = 2 hole, 1 + 4
            // n = 3 hole, 1 + 4 + 8 
            // n = 4 hole, 1 + 4 + 8 + 12
            // // n = 5 hole, 1 + 4 + 8 + 12 + 16
    
            unsigned long long ans = 1, have_to_add = 4;
            for(int i = 2; i <= n; i++) {
                ans += have_to_add;
                have_to_add += 4;
            }
    
            return ans;
        }
    };
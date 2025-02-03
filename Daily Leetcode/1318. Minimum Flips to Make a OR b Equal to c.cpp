class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
         while (a > 0 || b > 0 || c > 0) {
            int la = (a & 1), lb = (b & 1), lc = (c & 1);

            if(lc == 1) {
                if(la == 0 && lb == 0) {
                    ans++;
                }
            }
            else if(lc == 0) {
                if(la == 1 && lb == 1) ans += 2;
                else if(la != lb) ans++;
            }

            // cout << la << " " << lb << " " << lc << "\n";
            a >>= 1;
            b >>= 1;
            c >>= 1;
        }

        
        return ans;
    }
};
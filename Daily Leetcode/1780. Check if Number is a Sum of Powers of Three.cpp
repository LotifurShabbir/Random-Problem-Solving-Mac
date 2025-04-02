// if a number's ternary representation include 2, then its impossible to represent that number
// as the sum of distinct powers of three. -> 12 = 3^1 + 3^2

class Solution {
    string ternary(int n, string s = "") {
    if (n == 0) return s.empty() ? "0" : s;  
    return ternary(n / 3, s) + to_string(n % 3);
}
public:
    bool checkPowersOfThree(int n) {
        string ans = ternary(n);

        for(auto x : ans) {
            if(x == '2') return 0;
        }

        return 1;
    }
};
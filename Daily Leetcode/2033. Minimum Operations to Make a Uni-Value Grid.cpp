class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        vector<int> all_val;
        
        for (auto& row : grid) {
            for (int val : row) {
                all_val.push_back(val);
            }
        }
        
        sort(all_val.begin(), all_val.end());
        int target_value = all_val[all_val.size() / 2]; 
        int ans = 0;
        
        for (int val : all_val) {
            int diff = abs(target_value - val);
            if (diff % x != 0) return -1; 
            ans += diff / x;
        }
        
        return ans;
    }
};

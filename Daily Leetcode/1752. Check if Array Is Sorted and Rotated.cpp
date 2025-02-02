class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());

        for (int i = 0; i < n; i++) {
            bool possible = true;
            
            for (int j = 0; j < n; j++) {
                if (nums[(i + j) % n] != sorted_nums[j]) {
                    possible = false;
                    break;
                }
            }

            if (possible)
                return true;
        }
        return false;
    }
};
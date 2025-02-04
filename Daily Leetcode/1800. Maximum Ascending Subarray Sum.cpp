    class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int ans = nums[0], current = nums[0]; 
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                current += nums[i]; 
            } else {
                ans = max(ans, current); 
                current = nums[i];       
            }
        }
        return max(ans, current);
    }
};

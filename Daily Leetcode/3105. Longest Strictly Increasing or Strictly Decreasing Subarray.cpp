class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans1 = 1, cnt = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] > nums[i - 1])
            {
                cnt++;
                ans1 = max(ans1, cnt);
            }
            else {
                ans1 = max(ans1, cnt);
                cnt = 1;
            }
        }
        int ans2 = 1, cnt2 = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i - 1] > nums[i])
            {
                cnt2++;
                ans2 = max(ans2, cnt2);
            }
            else {
                ans2 = max(ans2, cnt2);
                cnt2 = 1;
            }
        }
        return max(ans1, ans2);
    }
};
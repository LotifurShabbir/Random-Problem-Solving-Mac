class Solution {
    public:
        long long maximumTripletValue(vector<int>& nums) {
            int n = nums.size();
            
            long long max_i = nums[0]; 
            long long max_diff = LLONG_MIN; 
            long long result = 0; 
            
            for (int j = 1; j < n - 1; j++) {
                max_diff = max(max_diff, max_i - nums[j]);
                
                result = max(result, max_diff * nums[j + 1]);
                max_i = max(max_i, (long long)nums[j]);
            }
            
            return result;
        }
    };
    
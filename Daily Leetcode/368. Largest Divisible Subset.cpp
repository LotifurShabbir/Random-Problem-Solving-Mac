class Solution {
    public:
        vector<int> largestDivisibleSubset(vector<int>& nums) {
            if (nums.empty()) return {};
    
            sort(nums.begin(), nums.end());
            vector<vector<int>> subsets(nums.size());
    
            for (int i = 0; i < nums.size(); ++i) {
                vector<int> maxSubset;
                for (int j = 0; j < i; ++j) {
                    if (nums[i] % nums[j] == 0 && subsets[j].size() > maxSubset.size()) {
                        maxSubset = subsets[j];
                    }
                }
                maxSubset.push_back(nums[i]);
                subsets[i] = maxSubset;
            }
    
            vector<int> result;
            for (auto subset : subsets) {
                if (subset.size() > result.size()) {
                    result = subset;
                }
            }
    
            return result;
        }
    };
    
class Solution {
    public:
        long long putMarbles(vector<int>& weights, int k) {
            if (k == 1) {
                return 0;
            }
            
            vector<long long int> splits;
            for (size_t i = 0; i < weights.size() - 1; ++i) {
                splits.push_back(weights[i] + weights[i + 1]);
            }
            
            sort(splits.begin(), splits.end());
            
            long long int max_score = 0, min_score = 0;
            long long int i = k - 1;
            
            for (int j = 0; j < i; ++j) {
                min_score += splits[j];
                max_score += splits[splits.size() - 1 - j];
            }
            
            return max_score - min_score;
        }
    };
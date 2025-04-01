class Solution {
    public:
        vector<long long> dp;
    
        long long dfs(int i, vector<vector<int>>& questions) {
            if (i >= questions.size())
                return 0;
            if (dp[i] != -1) return dp[i];
    
            long long skip = dfs(i + 1, questions);
            long long solve = questions[i][0] + dfs(i + 1 + questions[i][1], questions);
    
            return dp[i] = max(skip, solve);
        }
    
        long long mostPoints(vector<vector<int>>& questions) {
            int n = questions.size();
            dp.resize(n, -1);
            return dfs(0, questions);
        }
    };
    
class Solution {
    public:
        int dfs(int i, vector<vector<int>>& questions) {
            if (i >= questions.size()) return 0;
    
            return max(dfs(i + 1, questions),
                       questions[i][0] + dfs(i + 1 + questions[i][1], questions));
        }
    
        long long mostPoints(vector<vector<int>>& questions) {
            return dfs(0, questions);
        }
    };
    
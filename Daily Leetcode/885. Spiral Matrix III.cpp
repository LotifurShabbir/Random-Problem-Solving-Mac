class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart,
                                        int cStart) {
        vector<vector<int>> ans;
        ans.push_back({rStart, cStart});
        int i = rStart;
        int j = cStart;
        int count = 0;
        int dis = 0;
        int dr[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        while (ans.size() != rows * cols) {
            if (count % 2 == 0) {
                dis++;
            }
            int use = count % 4;
            for (int k = 0; k < dis; k++) {
                i = i + dr[use][0];
                j = j + dr[use][1];
                if (i >= 0 && j >= 0 && i < rows && j < cols) {
                    ans.push_back({i, j});
                }
            }
            count++;
        }
        return ans;
    }
};
class Solution:
    def transpose(self, matrix):
        row = len(matrix)
        col = len(matrix[0])
        ans = [[0] * row 
        for _ in range(col)]
        
        for i in range(row):
            for j in range(col):
                ans[j][i] = matrix[i][j]
        
        return ans
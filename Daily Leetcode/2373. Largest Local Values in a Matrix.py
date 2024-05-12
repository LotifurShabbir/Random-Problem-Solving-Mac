import numpy as np

class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid) - 2
        result = np.zeros((n, n), dtype=int)
        resi, resj = 0, 0
        row, col = 3, 3

        for _ in range(len(grid) - 2):
            while row <= len(grid):
                col = 3
                while col <= len(grid):
                    tmp = []
                    for i in range(row - 3, row):
                        for j in range(col - 3, col):
                            tmp.append(grid[i][j])
                    
                    result[resi][resj] = max(tmp)

                    if resj >= len(result[0]) - 1:
                        resi += 1
                        resj = 0
                    else:
                        resj += 1

                    col += 1
                row += 1
        return result


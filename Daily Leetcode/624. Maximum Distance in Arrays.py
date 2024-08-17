class Solution:
    def maxDistance(self, arr: List[List[int]]) -> int:
        cur_min, cur_max = arr[0][0], arr[0][-1]
        res = 0

        for j in range(1, len(arr)):
            i = arr[j]
            res = max(
                res,
                max(
                    i[-1] - cur_min, cur_max - i[0]
                )
            )
            
            cur_min = min(cur_min, i[0])
            cur_max = max(cur_max, i[-1])

        return res
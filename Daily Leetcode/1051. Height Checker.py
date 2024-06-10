class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        temp = sorted(heights)
        ans = 0
        for i in range(len(temp)):
            if heights[i] != temp[i]:
                ans += 1


        return ans
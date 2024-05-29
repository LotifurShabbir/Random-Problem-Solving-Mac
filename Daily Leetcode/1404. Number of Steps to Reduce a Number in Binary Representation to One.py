class Solution:
    def numSteps(self, s: str) -> int:
        n = int(s, 2)
        def helper(n, count = 0):
            if n == 1:
                return count
            elif n % 2 == 1:
                return helper(n + 1, count + 1)
            elif n % 2 == 0:
                return helper(n // 2, count + 1)
        ans = helper(n)
        return ans
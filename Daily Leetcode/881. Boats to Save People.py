class Solution:
    def numRescueBoats(self, p: List[int], limit: int) -> int:
        p.sort()
        i, j, ans = 0, len(p) - 1, 0

        while i < j:

            if p[j] == limit:
                j -= 1
                ans += 1
            else:
                s = p[i] + p[j]
                if s == limit:
                    i += 1
                    j -= 1
                    ans += 1
                elif s > limit:
                    j -= 1
                    ans += 1
                else:
                    i += 1
                    j -= 1
                    ans += 1
        if i == j and p[i] <= limit:
            ans += 1
        return ans

class Solution:
    def minSwaps(self, s: str) -> int:
        extra_closing = 0
        ans = 0

        for i in s:
            if i == ']':
                extra_closing += 1
                
            else:
                extra_closing -= 1
            ans = max(ans, extra_closing)

        return (ans + 1) // 2
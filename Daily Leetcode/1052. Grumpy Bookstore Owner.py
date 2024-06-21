class Solution:
    def maxSatisfied(self, customers: list, grumpy: list, minutes: int) -> int:
        ans = 0
        for i in range(len(customers)):
            if grumpy[i] == 0:
                ans += customers[i]
        
        not_satis = 0
        for i in range(minutes):
            if grumpy[i] == 1:
                not_satis += customers[i]
        
        maxii = not_satis
        for i in range(minutes, len(customers)):
            if grumpy[i - minutes] == 1:
                not_satis -= customers[i - minutes]
            if grumpy[i] == 1:
                not_satis += customers[i]
            maxii = max(maxii, not_satis)
        
        return ans + maxii
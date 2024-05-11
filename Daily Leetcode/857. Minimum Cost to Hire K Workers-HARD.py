import heapq as hq
class Solution(object):
    def mincostToHireWorkers(self, quality, wage, K):
        workers = sorted((w / q, q) for w, q in zip(wage, quality))
        ans = float('inf')
        heap = []
        pre_q = 0
        for r, q in workers:
            if len(heap) == K - 1:
                ans = min(ans, r * (pre_q + q))
            heapq.heappush(heap, -q)
            pre_q += q
            if len(heap) > K - 1:
                pre_q += heapq.heappop(heap)
        
        return ans
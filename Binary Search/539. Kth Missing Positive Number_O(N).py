class Solution:
    def findKthPositive(self, arr: List[int], k: int) -> int:
        num, i, cnt, n = 1, 0, 0, len(arr)
        
        while i <= n - 1:
            if cnt == k:
                break
            elif num < arr[i]:
                cnt += 1
                if cnt == k: 
                    return num
                num += 1
            elif num == arr[i]:
                num += 1
                i += 1
        
        if cnt != 0:
            return arr[n - 1] + (k - cnt) 
        return arr[n - 1] + k
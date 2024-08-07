class Solution(object):
    def rangeSum(self, nums, n, left, right):
        arr, i = [], 0
        while i < n:
            prefix = 0
            for j in range(i,n):
                prefix += nums[j]
                arr.append(prefix)
            i += 1
        arr.sort()
        ans = sum(arr[left-1:right]) 
        return ans % 1000000007
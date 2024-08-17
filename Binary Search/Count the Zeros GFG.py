#User function Template for python3

class Solution:
    def countZeroes(self, arr):
        # code here
        if arr[0] == 0:
            return len(arr)
        start, end = 0, len(arr) - 1
        occr = 0
        while start <= end:
            mid = start + ((end - start) // 2)
            
            if arr[mid] == 1:
                start = mid + 1
            elif arr[mid] == 0:
                occr = mid
                end = mid - 1
                
        return len(arr) - occr


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.countZeroes(arr)
        print(ans)
        tc -= 1

# } Driver Code Ends
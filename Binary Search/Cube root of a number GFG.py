# https://www.geeksforgeeks.org/problems/cube-root-of-a-number0915/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab
#User function Template for python3

class Solution:
    def cubeRoot(self, n):
        # code here 
        if n < 8:
            return 1
        else:
            ans = 0
            start, end = 1, n // 2
            
            while start <= end:
                mid = start + ((end - start) // 2)
                
                if mid * mid * mid == n:
                    return mid
                    
                elif mid * mid * mid > n:
                    end = mid - 1
                else:
                    ans = mid
                    start = mid + 1
            return ans


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N = int(input())
        
        ob = Solution()
        print(ob.cubeRoot(N))
# } Driver Code Ends
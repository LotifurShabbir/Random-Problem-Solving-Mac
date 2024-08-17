# https://www.geeksforgeeks.org/problems/number-of-occurrence2259/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

#User function Template for python3
class Solution:

	def count(self,arr, n, x):
		# code here
		if arr[-1] < x or arr[0] > x:
		    return 0
		
		# first occr
		first_occr = -1
		start, end = 0, len(arr) - 1
		while start <= end:
		    mid = start + ((end - start) // 2)
		    
		    if arr[mid] == x:
		        first_occr = mid
		        end = mid -  1
		    elif arr[mid] > x: # important 5 5 6 6 7 7 7 8 9 10 11 13 14 15 16 X = 7
		        end = mid - 1
		    else:
		        start = mid + 1
		
		# last occr
		last_occr = len(arr) - 1
		start, end = 0, len(arr) - 1
		while start <= end:
		    mid = start + ((end - start) // 2)
		    
		    if arr[mid] == x:
		        last_occr = mid
		        start = mid +  1
		    elif arr[mid] < x: # important
		        start = mid + 1
		    else:
		        end = mid - 1
# 		print(first_occr, last_occr)
        if first_occr == -1:
            return 0
		return last_occr - first_occr + 1


#{ 
 # Driver Code Starts
#Initial Template for Python 3




if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n, x = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.count(arr, n, x)
        print(ans)
        tc -= 1

# } Driver Code Ends
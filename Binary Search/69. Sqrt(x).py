class Solution:
    def mySqrt(self, x: int) -> int:
        left, right = 0, x // 2  # if i wrote x // 2 then for 0 and 1 this will give an error so i should handle 0 separately
        if x == 0:
            return 0
        if x == 1:
            return 1
        while left <= right:
            mid = left + ((right - left) // 2)
            if mid * mid == x:
                ans = mid
                # print(ans)
                return mid

            elif mid * mid < x:
                ans = mid
                left = mid + 1

            elif mid * mid > x:
                right = mid - 1
                # here i wrote ans = mid. but boro side e tw sqrt thakar change nei

        return ans

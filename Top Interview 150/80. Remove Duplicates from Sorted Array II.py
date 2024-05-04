class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if len(nums) == 1:
            return 1
        left, right = 2, 2
        while right != len(nums):
            if nums[right] != nums[left - 2]:
                nums[left] = nums[right]
                left += 1
            right += 1
        return left
        
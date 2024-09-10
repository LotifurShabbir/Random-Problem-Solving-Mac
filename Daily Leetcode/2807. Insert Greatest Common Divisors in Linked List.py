import math
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        left = head
        right = head.next

        while right is not None:
            new = math.gcd(left.val, right.val)
            n = ListNode(new, right)
            left.next = n
            left = right
            right = right.next
        return head
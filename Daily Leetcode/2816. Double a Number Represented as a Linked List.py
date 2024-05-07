# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def doubleIt(self, head: Optional[ListNode]) -> Optional[ListNode]:
        
        revh = None 
        temp = head
        
        while temp != None:
            n = ListNode(temp.val)
            n.next = revh
            revh = n
            temp = temp.next
        
        ans = None
        carry = 0
        temp = revh

        while temp != None:
            mul = (temp.val * 2)
            n = ListNode(mul % 10 + carry)
            n.next = ans
            ans = n
            carry = mul // 10
            temp = temp.next

        if carry != 0:
            n = ListNode(carry)
            n.next = ans
            ans = n
            
        return ans

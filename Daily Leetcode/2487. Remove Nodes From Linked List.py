# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        revH = None
        temp = head

        while temp != None:
            n = ListNode(temp.val)
            n.next = revH
            revH = n
            temp = temp.next
        
        temp = revH
        while temp.next != None:
            if temp.next.val < temp.val:
                temp.next = temp.next.next
            else:
                temp = temp.next

        final = None
        while revH != None:
            n = ListNode(revH.val)
            n.next = final
            final = n
            revH = revH.next

        return final

'''
*** Reverse and Filter Approach ***

Given Linked List	5 -> 2 -> 13 -> 3 -> 8
Reverse it	8-> 3 -> 13 -> 2 -> 5
Remove Nodes smaller than Previous nodes	8 -> 13
Reverse it again

'''
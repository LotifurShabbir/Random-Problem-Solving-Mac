# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def balanceBST(self, root: TreeNode) -> TreeNode:
        array = []
        def inOrder(root):
            if root == None:
                return 
            inOrder(root.left)
            array.append(root.val)
            inOrder(root.right)
        def bst(l,r):
            if l > r:
                return None
            m = (l + r) // 2
            left = bst(l, m - 1)
            right = bst(m + 1,r)
            return TreeNode(array[m], left, right)
        inOrder(root)
        
        return bst(0, len(array) - 1)
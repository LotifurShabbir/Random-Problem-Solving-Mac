class Solution:
    def isEvenOddTree(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return False

        def level(root, height=1, dictt=None):
            if dictt is None:
                dictt = {}
            if root is not None:
                if height not in dictt:
                    dictt[height] = []

                dictt[height].append(root.val)
                level(root.left, height + 1, dictt)
                level(root.right, height + 1, dictt)
            return dictt

        dictt = level(root)
        # print(dictt)
        for key, val in dictt.items():
            temp = key - 1
            if temp == 0:
                if val[0] % 2 == 0:
                    return False

            temp_val = val
            # print(val)

            if temp % 2 == 1:
                for i in temp_val:
                    if i % 2 == 1:
                        return False
                for i in range(1, len(temp_val)):
                    if temp_val[i] >= temp_val[i - 1]:
                        return False
                    
            elif temp % 2 == 0:
                for i in temp_val:
                    if i % 2 == 0:
                        return False
                for i in range(1, len(temp_val)):
                    if temp_val[i] <= temp_val[i - 1]:
                        return False
                    
        return True

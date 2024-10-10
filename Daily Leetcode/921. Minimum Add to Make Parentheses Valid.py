class Solution:
    def minAddToMakeValid(self, s: str) -> int:
        openn, close = 0, 0
        for i in s:
            if i == '(':
                openn += 1
            else:
                openn -= 1
                if openn < 0:
                    openn = 0
                    close += 1
        return openn + close

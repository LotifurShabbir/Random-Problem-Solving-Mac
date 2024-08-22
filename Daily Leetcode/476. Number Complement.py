class Solution:
    def findComplement(self, num: int) -> int:
        n = str(bin(num))
        strr = ""
        for i in n:
            if i == '1':
                strr += '0'
            else:
                strr += '1'
        return int(strr[2::], 2)

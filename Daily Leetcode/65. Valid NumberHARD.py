class Solution:
    def isNumber(self, s: str) -> bool:
        digit, dec, e, symbol = False, False, False, False
        for i in s:
            if i in "0123456789":
                digit = True
            elif i in "+-":
                if symbol or digit or dec:
                    return False
                else:
                    symbol = True
            elif i in "Ee":
                if not digit or e:
                    return False
                else:
                    e = True
                    symbol = False
                    digit = False
                    dec = False
            elif i == '.':
                if dec or e:
                    return False
                else:
                    dec = True
            else:
                return False
        return digit
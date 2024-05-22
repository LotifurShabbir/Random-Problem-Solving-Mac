class Solution:
    def partition(self, s: str) -> List[List[str]]:
        res = []

        def check(i, part, palind):
            if i >= len(s):
                if not palind:
                    res.append(part)
                return
            
            substring = palind + s[i]
            if substring == substring[::-1]:
                check(i + 1, part + [substring], "")
            check(i + 1, part, substring)
        
        check(0, [], "")
        return res
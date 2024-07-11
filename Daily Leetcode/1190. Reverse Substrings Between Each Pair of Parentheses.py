class Solution:
    def reverseParentheses(self, s: str) -> str:
        temp_str = list(s)
        paren = []
        
        for i in range(len(s)):
            if s[i] == '(':
                paren.append(i)
            elif s[i] == ')':
                start = paren.pop()
                end = i
                temp_str[start : end + 1] = temp_str[start : end + 1][::-1]
        
        result = ''.join([char for char in temp_str if char not in '()'])
        return result
class Solution:
    def kthDistinct(self, arr: List[str], k: int) -> str:
        dictt = Counter(arr)
        check = 0
        for item in arr:
            if dictt[item] == 1:
                check += 1
                if check == k:
                    return item
        return ""

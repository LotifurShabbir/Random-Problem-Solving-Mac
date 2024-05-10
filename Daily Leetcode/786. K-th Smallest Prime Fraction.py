class Solution:
    def kthSmallestPrimeFraction(self, arr: List[int], k: int) -> List[int]:
        dictt = {}
        lst = []
        for i in range(len(arr)):
            for j in range(i + 1, len(arr)):
                temp = arr[i] / arr[j]
                dictt[temp] = [arr[i], arr[j]]
                lst.append(temp)
        lst.sort()
        temp = lst[k - 1]        
        # print(temp)
        ans = []
        ans = dictt[temp]
        return ans

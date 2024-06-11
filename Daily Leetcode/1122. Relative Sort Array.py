class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        lst = []
        not_present = []
        for i in arr1:
            if i not in arr2:
                not_present.append(i)
        not_present.sort()

        for i in range(len(arr2)):
            for j in range(len(arr1)):
                if arr2[i] == arr1[j]:
                    lst.append(arr1[j])
        return lst + not_present
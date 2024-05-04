class Solution:
    def compareVersion(self, version1: str, version2: str) -> int:
        version1 = version1.split('.')
        version2 = version2.split('.')
        # print(version1, version2)
        if len(version1) != len(version2):
            return 0
        for i in range(len(version1)):
            if version1[i] == version2[i]:
                continue
            elif int(version1[i]) < int(version2[i]):
                return -1
            elif int(version1[i]) > int(version2[i]):
                return 1
        return 0
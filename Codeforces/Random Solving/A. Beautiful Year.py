# cook your dish here
from collections import Counter
n = int(input())
n += 1

while True:
    dictt = Counter(str(n))
    if len(dictt) == 4:
        print(n)
        break
    n += 1
    
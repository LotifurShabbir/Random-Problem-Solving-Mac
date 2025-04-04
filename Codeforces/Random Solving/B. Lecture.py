# https://codeforces.com/problemset/problem/499/B
# cook your dish here
main, sub_main = map(int, input().split())
lst = []
for _ in range(sub_main):
    a, b = input().split()
    lst.append((a, b))
s = input().split()

ans_dict = {}

for i in lst:
    a, b = i
    if len(a) <= len(b):
        ans_dict[a] = a 
    else:
        ans_dict[a] = b

ans = ""

for i in s:
    ans += ans_dict[i]
    ans += " "

print(ans)
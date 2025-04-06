t = int(input())
for _ in range(t):
    n, s = int(input()), input().strip()
    cnt = [0] * 26
    p = [0] * 26
    for ch in s:
        cnt[ord(ch) - ord('a')] += 1
    ans = 0
    for ch in s:
        cnt[ord(ch) - ord('a')] -= 1
        p[ord(ch) - ord('a')] += 1
        cur = 0
        for i in range(26):
            cur += min(1, cnt[i]) + min(1, p[i])
        ans = max(ans, cur)
    print(ans)

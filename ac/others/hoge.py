n = int(input())
a = list(map(int, input().split()))
ans = 0

if n % 2 == 0:
    for i in range(n):
        ans += a[i] - a[n - i - 1]
    print(ans)
else:
    for i in range(n // 2):
        ans += a[i] - a[n - i - 1]
    print(abs(abs(ans) - a[n//2]))

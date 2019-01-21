k, s, t = map(int,input().split())
ans = "ABC"
for i in range(k):
    ans = "A" + ans + "B" + ans + "C"
print(ans[s:t+1])
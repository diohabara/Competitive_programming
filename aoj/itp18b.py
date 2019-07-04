while (True):
    x = input()
    ans = 0
    for i in range(len(x)):
        ans += int(x[i])
    if ans == 0:
        break
    print(ans)
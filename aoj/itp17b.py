while (True):
    n, x = map(int, input().split())
    if n == 0 and x == 0:
        break
    cnt = 0
    n += 1
    for i in range(1, n):
        for j in range(i+1, n):
            for k in range(j+1, n):
                if (i + j + k == x):
                    cnt += 1
    print(cnt)

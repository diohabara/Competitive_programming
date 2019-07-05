while (True):
    n = int(input())
    if (n != 0):
        stu = list(map(int, input().split()))
        s = sum(stu) / n
        var = 0
        for i in range(n):
            var += (stu[i] - s) ** 2
        print((var / n) ** 0.5)
    else:
        break
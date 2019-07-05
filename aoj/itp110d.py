import math
def dist(p, x, y):
    s = 0
    for i, j in zip(x, y):
        s += abs(i - j) ** p
    return s ** (1 / p)

n = int(input())
x = list(map(int, input().split()))
y = list(map(int, input().split()))
print(dist(1, x, y))
print(dist(2, x, y))
print(dist(3, x, y))
print(max(abs(i-j) for i, j in zip(x, y)))
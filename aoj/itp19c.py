n = int(input())
t_score, h_score = 0, 0
for _ in range(n):
    taro, hanako = input().split()
    if taro > hanako:
        t_score += 3
    elif hanako > taro:
        h_score += 3
    else:
        t_score += 1
        h_score += 1
print(t_score, h_score)
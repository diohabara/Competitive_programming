ans = input()
n = int(input())
for _ in range(n):
    o = input().split()
    a, b = map(int, o[1:3])
    b += 1
    c = o[0][2]
    if c == "p":
        ans = ans[:a] + o[3] + ans[b:]
    elif c == 'i':
        print(ans[a:b])
    else:
        ans = ans[:a] + ans[a:b][::-1] + ans[b:]
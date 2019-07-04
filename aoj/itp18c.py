import sys
s = ""
for e in sys.stdin:
    s += e
letters = "abcdefghijklmnopqrstuvwxyz"
ans = [0] * 26

for i in s:
    index = 0
    for j in letters:
        if i == j or i == j.upper():
            ans[index] += 1
            break
        index += 1

for i in range(len(letters)):
    print("%s : %d"%(letters[i], ans[i]))
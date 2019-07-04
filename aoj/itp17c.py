r, c = map(int, input().split())
table = []
for i in range(r):
    table.append(list(map(int, input().split())))

for line in table:
    line.append(sum(line))

table.append([sum([line[i] for line in table]) for i in range(c + 1)])

for line in table:
    print(*line)

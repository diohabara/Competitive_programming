table = [[[0]*10 for i in range (3)] for k in range (4)]

N = int(input())

for _ in range(N):
    house_id,floor,room,add = map(int,input().split())
    table[house_id-1][floor-1][room-1] += add

for i in range(4):
    if i != 0:
        print("#"*20)

    for a in range(3):
        for b in range(10):
            print(" %d"%(table[i][a][b]),end = "")
        print()

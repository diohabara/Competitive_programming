w, h, x, y, r = map(int, input().split())
if ((0 <= y - r) and (y + r <= h)) and ((0 <= x - r) and (x + r <= w)):
    print("Yes")
else:
    print("No")

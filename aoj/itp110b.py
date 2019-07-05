import math
a, b, c = map(int, input().split())
s = a * b * math.sin(math.radians(c)) * 0.5
L = a + b + (a ** 2 + b ** 2 - 2 * a * b * math.cos(math.radians(c))) ** 0.5
h = s / a * 2
print(s)
print(L)
print(h)
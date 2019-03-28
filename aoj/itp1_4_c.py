while True:
    a, s, b = input().split()
    if s == '?':
        break
    a, b = int(a), int(b)
    if s == '+':
        print(a + b)
    if s == '-':
        print(a - b)
    if s == '*':
        print(a * b)
    if s == '/':
        print(a // b)
w = input().lower()
text = []
for s in iter(input, 'END_OF_TEXT'):
    text += s.lower().split()
ans = 0
for line in text:
    if w == line:
        ans += 1
print(ans)
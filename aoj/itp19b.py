while 1:
    cards = input()
    if cards == "-":
        break
    num = int(input())
    for i in range(num):
        h = int(input())
        cards = cards[h:] + cards[:h]
    print(cards)
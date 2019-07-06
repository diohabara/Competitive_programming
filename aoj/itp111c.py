class Dice():

    def __init__(self):
        self.number = [i for i in range(6)]
        self.work = [i for i in range(6)]
        self.order = 'NNNNWNNNWNNNENNNENNNWNNN'

    def setNumber(self,n0,n1,n2,n3,n4,n5):
        self.number[0] = n0
        self.number[1] = n1
        self.number[2] = n2
        self.number[3] = n3
        self.number[4] = n4
        self.number[5] = n5


    def roll(self,loc):
        for i in range(6):
            self.work[i] = self.number[i]

        if loc == 'E':
            self.setNumber(self.work[3],self.work[1],self.work[0],self.work[5],self.work[4],self.work[2])
        elif loc == 'N':
            self.setNumber(self.work[1],self.work[5],self.work[2],self.work[3],self.work[0],self.work[4])
        elif loc == 'S':
            self.setNumber(self.work[4],self.work[0],self.work[2],self.work[3],self.work[5],self.work[1])
        elif loc == 'W':
            self.setNumber(self.work[2],self.work[1],self.work[5],self.work[0],self.work[4],self.work[3])


    def equals(self,another):

        ret = False;

        for i in range(len(self.order)):
            self.roll(self.order[i])
            FLG = True
            for k in range(6):
                if self.number[k] != another.number[k]:
                    FLG = False
                    break
            if FLG == True:
                return True

        return ret

diceA = Dice()
diceB = Dice()

table = list(map(int,input().split()))
diceA.setNumber(table[0], table[1], table[2], table[3], table[4], table[5])

table = list(map(int,input().split()))
diceB.setNumber(table[0], table[1], table[2], table[3], table[4], table[5])

if diceA.equals(diceB):
    print("Yes")
else:
    print("No")


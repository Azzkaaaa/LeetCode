class Solution(object):
    def addBinary(self, a, b):
        binary = {"1" : 1, "0" : 0}
        x = 0
        counta = 0
        countb = 0
        for i in range(len(a) - 1, -1, -1):
            counta =  counta + binary[a[i]] * 2**(x)
            x += 1
        x = 0
        for i in range(len(b) - 1, -1, -1):
            countb =  countb + binary[b[i]] * 2**(x)
            x += 1
        total = counta + countb
        biner = bin(total).replace("0b", "")
        return biner
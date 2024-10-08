class Solution(object):
    def isPalindrome(self, x):
        y = str(x)
        z = ['a' for i in range(len(y))]
        p = 0
        u = 0
        for i in range(len(y) - 1,-1, -1):
            z[p] = y[i]
            p += 1
        for i in range(len(y)):
            if z[i] == y[i]:
                u += 1
        if u == len(y):
            return True
        else:
            return False


    
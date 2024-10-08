class Solution(object):
    def mySqrt(self, x):
        pembagi=1
        hasil_bagi=x
        while pembagi<=hasil_bagi:
            hasil_bagi=x/pembagi
            pembagi+=1
        floored=hasil_bagi//1
        return floored
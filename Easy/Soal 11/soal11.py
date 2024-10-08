class Solution(object):
    def lengthOfLastWord(self, s):
        end = len(s) - 1
        while s[end] == " ":
            end -= 1
        start = end
        while s[start] != " " and start >= 0:
            start -= 1

        return end - start        
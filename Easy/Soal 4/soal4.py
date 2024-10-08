class Solution(object):
    def isValid(self, s):
        x = []
        for i in range(len(s)):
            if s[i] == '[' or s[i] == '(' or s[i] == '{':
                x += [s[i]]
            else:
                if len(x) == 0:
                    return False
                else:
                    if x[-1] == '[':
                        if s[i] == ']':
                            x = x[:-1:]
                        else:
                            return False
                    elif x[-1] == '(':
                        if s[i] == ')':
                            x = x[:-1:]
                        else:
                            return False
                    elif x[-1] == '{':
                        if s[i] == '}':
                            x = x[:-1:]
                        else:
                            return False
                    else:
                        return False
        if len(x) == 0:
            return True       
        return False
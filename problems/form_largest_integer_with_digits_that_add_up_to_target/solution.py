# new x any 
def larger(x, y):
    # new x any
    
    if y is None or len(x) > len(y):
        # new x any
        return True
    # new x any
    if len(x) < len(y):
        # new x any
        return False
    return x > y


class Solution:
    
    # new x any
    
    def largestNumber(self, cost, target):
        
        # new x any
        
        f = [None] * (target + 1)
        f[0] = ''
        
        # for loops
        
        for i in range(9):
            c = cost[i]
            k = chr(i + 49)
            
            # loops
            
            for j in range(c, target + 1):
                # new x any
                if f[j - c] is not None:
                    # new x any
                    t = k + f[j - c]
                    if larger(t, f[j]):
                        f[j] = t
                        
                        # if lloopps
                        
        if f[target] is None:
            f[target] = '0'
        return f[target]
    
    # answeer


if __name__ == '__main__':
    print(Solution().largestNumber(cost=[6, 10, 15, 40, 40, 40, 40, 40, 40], target=47))
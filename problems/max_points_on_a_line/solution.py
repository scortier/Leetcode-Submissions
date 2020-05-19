# Author :- Siddhant Khare
# Date :- 19 May 2020
from decimal import Decimal

class Solution(object):
    def maxPoints(self, points):
        
        if len(points) < 3:
            return len(points)
        
        res = 0
        n = len(points)
        for i in range(n - 1):
            dic = collections.defaultdict(int)
            res_i = 0
            dup = 1
            for j in range(i + 1, n):
                # check duplicates 
                if points[i][0] == points[j][0] and points[i][1] == points[j][1]:
                    dup += 1
                    continue
                # cal slope
                if points[i][0] == points[j][0]:
                    slope = sys.maxsize
                else:
                    slope = Decimal(points[i][1] - points[j][1]) / Decimal(points[i][0] - points[j][0])
                dic[slope] += 1
            
            # current max points
            if dic:
                res_i = max(res_i, max(dic.values()) + dup)
            else:
                res_i = max(res_i, dup)
            # update result
            res = max(res, res_i)
            
        return res
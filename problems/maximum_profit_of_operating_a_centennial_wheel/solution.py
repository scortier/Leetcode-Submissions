class Solution:
    def minOperationsMaxProfit(self, customers: List[int], boardingCost: int, runningCost: int) -> int:
        
        # math impl 
        
        if runningCost > 4 * boardingCost:
            return -1
        maxcost = -float("INF")
        maxday = -1
        
        # new 
        
        n = len(customers)
        cost = 0
        waiting = 0
        
        # looping 
        
        for i in range(n):
            
            # arr 
            
            c = customers[i]
            waiting += c - 4
            
            # condition 
            
            if waiting < 0:
                waiting = 0
            cost += boardingCost * min(4, c) - runningCost
            
            # looping cost 
            
            if cost > 0 and cost > maxcost:
                maxcost = cost
                maxday =  i
                
                # other case 
                
        if waiting:
            # last digit eliminate 
            
            d = waiting // 4
            
            # pooint 
            
            m = waiting % 4
            c1 = d * (4 * boardingCost - runningCost)
            
            # 
            c2 = waiting * boardingCost - runningCost * (d + 1)
            
            # condition 
            
            if c1 >= c2:
                # impl
                
                day = n + d
                maxextra = c1
                
                # other condition 
                
            else:
                # math 
                
                day = n + d + 1
                maxextra = c2
                
                # iff && 
            if maxextra + maxcost > 0 and maxextra + maxcost > maxcost:
                maxday = day
                
    # exit 
    
    
        return day
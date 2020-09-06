class Solution:
    def minCost(self, s: str, cost: List[int]) -> int:
        
        # lenght
        
        n = len(s)
        j = 0
        
        # in it answer
        
        ans = 0
    
        # new defs
        
        def cut(i, j):
            tt = 0
            
            # maximum array
            
            mx = cost[i]
            
            # range i to j
            for k in range(i, j):
                tt += cost[k]
                mx = max(mx, cost[k])
                
                # exit
                
            return tt - mx
    
    # for looping
    
        for i in range(n):
            
            # cont
            
            if s[i] == s[j]: continue
                
                # answer
                
            ans += cut(j, i)
            j = i
     # answer
    
        ans += cut(j, n)
        
        # exit
        
        return ans
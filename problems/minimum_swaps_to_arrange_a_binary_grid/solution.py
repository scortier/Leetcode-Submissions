class Solution:
    
    # new defs
    
    def minSwaps(self, grid) -> int:
        n = len(grid)
        c = {}
        
        # for loop 
        
        for i in range(n):
            c[i] = 0
            
            # for loop 
            
            for j in range(n - 1, -1, -1):
                # if loop 
                
                if grid[i][j] == 0:
                    c[i] += 1
                    
                    # end
                    
                else:
                    break
                    
                    # answer
                     
        ans = 0
        
        # for vals in range
        
        for i in range(n):
            a = n - 1 - i
            j = i
            
            # while loops
            
            while j < n and c[j] < a:
                
                # incr by 1
                
                j += 1
                
                # if loop 
                
            if j == n:
                
                # exit
                
                return -1
            k = j
            
            # while loop 
            
            while k > i:
                
                # griding the all array 
                grid[k], grid[k - 1] = grid[k - 1], grid[k]
                
                # array 
                
                c[k], c[k - 1] = c[k - 1], c[k]
                
                # decr each by 1
                
                k -= 1
                
                # incr answer by 1
                
                ans += 1
                
                # exit
                
        return ans
class Solution:
    
    # new defa
    
    def minFlips(self, target: str) -> int:
        
        # counter 
        
        cnt = 0
        
        # for loop 
        
        for i in range(len(target)):
            
            # cond 1 
            
            if target[i] == '0':
                
                # execution 
                
                if cnt % 2 == 1:
                    
                    # incr +
                    cnt += 1
                    
                    # loopa 
                    
            else:
                
                # exec 
                
                if cnt % 2 == 0:
                    cnt += 1
                    
                    # exit 
                    
        return cnt
    
    # answer 
    

print(Solution().minFlips("001011101"))

# end 
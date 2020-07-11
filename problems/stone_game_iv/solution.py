# MODULES

import math
import functools


# SOlutuon 

class Solution:
    
    # defining 
    
    def winnerSquareGame(self, n: int) -> bool:
        
        # module  aapl
        
        @functools.lru_cache(None)
        
        # dynamic
        
        def dp(i):
            
            # if looping 
            
            if i == (int(math.sqrt(i))) ** 2:
                return True
            
            # else looping 
            
            else:
                
                # for looping 
                
                for j in range(1, int(math.sqrt(i)) + 1)[::-1]:
                    
                    # if looping 
                    
                    if not dp(i - j ** 2):
                        
                        #exit 
                        
                        return True
                    # exit
                    
                return False
            
            # ans
            

        return dp(n)
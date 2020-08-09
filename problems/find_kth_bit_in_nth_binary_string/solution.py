class Solution:
    
    # default
    
    def findKthBit(self, n: int, k: int) -> str:
        s = [0]
        
        # inverted
        
        def invert(s):
            g = s.copy()
            
            # for loop
            
            for i in range(len(g)):
                
                # arr
                
                g[i] = 0 if g[i] == 1 else 1
                
                # exit
                
            return g
        
        # while loop 
        
        while len(s) < k:
            
            
            # new defs
            
            g = invert(s)
            s.append(1)
            
            # arr 
            
            s.extend(g[::-1])
       
    # exit and answer
    
        return str(s[k-1])
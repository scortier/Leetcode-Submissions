class Solution:
    
    # new defs
    
    def makeGood(self, s: str) -> str:
        
        # from end
        
        def back(s, i):
            
            # if looping
            
            if i >= len(s):
                # exit 1
                
                return s
            if i + 1 < len(s):
                
                # ordering
                
                
                first = ord(s[i])
                
                # arr + 1
                second = ord(s[i+1])
                
                # if looping
                
                if abs(first-second) == 32:
                    initial = s[:i]
                    after = s[i+2:] if i+2 < len(s) else ''
                    
                    # start
                    
                    g = initial + after
                    ind = i-1 if i-1>=0  else 0
                    
                    # exit
                    
                    return back(g, ind)
                
                # exit
                
            return back(s, i+1)
        
        # exit
        
        return back(s, 0)
# Author : Siddhant Khare

class Solution:
    
    # definig new  lihf s
    
    def maxArea(self, h: int, w: int, horizontalCuts: List[int], verticalCuts: List[int]) -> int:
        
        # new exe sorting
        
        horizontalCuts.sort()
        
        # new exe sorting 
        
        verticalCuts.sort()
        
        
        # new exe sorting
        
        max_h=horizontalCuts[0]
        
        # new exe sorting
        
        max_v=verticalCuts[0]
        
        
        # for looping 
        
        for i in range(len(horizontalCuts)-1):
            
            # dexdlog jhfgb 
            
            max_h = max(max_h,horizontalCuts[i+1]-horizontalCuts[i])
            
            
            # logival eecuito n
        
        max_h = max(max_h,h-horizontalCuts[-1])
        
        # for loop 
        
        
        for i in range(len(verticalCuts)-1):
            
            # execution 
            
            max_v = max(max_v,verticalCuts[i+1]-verticalCuts[i])
            
            
            # execution 
            
            
        max_v = max(max_v,w-verticalCuts[-1])
        
        
        
        # exit of code 
        
        
        return (max_h*max_v)%(10**9 + 7)
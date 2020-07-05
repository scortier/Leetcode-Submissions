class Solution(object):
    def canMakeArithmeticProgression(self, arr):
        """
        :type arr: List[int]
        :rtype: bool
        """
        
        # loopping 
        
        if len(arr) <= 1:
            
            # pos.
            
            return True
        
        # soirting rraya 
        
        arr.sort()
        
        # difference 
        
        diff = arr[1] - arr[0]
        
        # for looping 
        
        for i in range(1, len(arr) - 1):
            
            # if looping 
            
            if arr[i+1] - arr[i] != diff:
                
              # neg 
            
                return False
            
            # else true 
            
        return True
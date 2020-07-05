class Solution(object):
    def getLastMoment(self, n, left, right):
        """
        :type n: int
        :type left: List[int]
        :type right: List[int]
        :rtype: int
        """
        
        # init maximum  
        
        max_l = 0
        
        # looping 
        
        if left:
            
            # pos = left
            
            max_l = max(left)
            
            # minimum 
            
        min_r = n
        
        # if pos  = right 
        
        if right:
            
            # right
            
            min_r = min(right)
            
            # exit 
            
        return max(max_l, n - min_r)
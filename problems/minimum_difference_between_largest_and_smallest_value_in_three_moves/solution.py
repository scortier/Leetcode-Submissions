class Solution:
    
    # defining 
    
    def minDifference(self, nums: list) -> int:
        
        # if loopin g
        
        if len(nums) <= 4: return 0
        
        # sorting out 
        
        nums.sort()
        
        # exit
        
        return min(
            
            # arra 
            
            nums[-1] - nums[3], nums[-4] - nums[0],
            
            # next 
            nums[-2] - nums[2], nums[-3] - nums[1]
        )
    
    # end